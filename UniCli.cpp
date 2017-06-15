//
// Created by mfc on 15.06.2017.
//

#include "UniCli.h"

void UniCli::say(std::string phrase) {
    std::cout << phrase << std::endl;
}

char UniCli::getChar() {
    std::string input;
    input = getInput();
    return input[0];
}


std::string UniCli::getInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

int UniCli::getNumberInput() {

    int input;

    try {
        input = std::stoi(getInput());
    }
    catch (std::exception &e) {
        say("Exception occurred:");
        std::cout << e.what() << std::endl;
        return -1;
    }

    return input;
}


void UniCli::welcomeLetterToWork(char input) {
    input = std::tolower(input, std::locale());
    switch (input) {
        case 'a' :
            addStudent();
            break;
        case 'r' :
            removeStudent();
            break;
        case 'u' :
            updateStudent();
            break;
        case 'd' :
            displayStudent();
            break;
        case 'e' :
            isRunning = false;
            break;
    }
}

void UniCli::welcomeScreen() {
    while (isRunning) {
        std::cout << std::endl << std::endl << std::endl;
        say("Welcome To Student Manager 2000!!!");
        say("Currently there are " + std::to_string(uniRef.getStudentAmount()) + " students registered.");
        say("Enter one of following letters:");
        say("A: Add Student");
        say("R: Remove Student");
        say("U: Update Student");
        say("D: Display Student");
        say("E: Exit Program");
        welcomeLetterToWork(getChar());
    }
}


void UniCli::addStudent() {
    say("Adding New Student...");
    auto student_new = Student();

    //Faculty
    if (!setStudentFaculty(student_new))
        return;

    //Department
    if (!setStudentDepartment(student_new))
        return;

    //Name
    if (!setStudentName(student_new))
        return;

    //Gender
    if (!setStudentGender(student_new))
        return;

    //Email
    if (!setStudentMail(student_new))
        return;


    addCourses(student_new);


    uniRef.addStudent(student_new);
    say("Congratulations, Your ID is given: " + std::to_string(student_new.getId()));
}


bool UniCli::setStudentMail(Student &student) {
    while (true) {
        say("Enter Student's Email: ");
        auto input = getInput();
        if (cancelling(input))
            return false;
        student.setEmail(input);
        say("Student Email set to: " + student.getEmail());
        return true;
    }
}

bool UniCli::cancelling(std::string input) {
    if (input.find("cancel") != std::string::npos) {
        say("Cancelling Operation...");
        return true;
    }
    return false;
}

bool UniCli::setStudentGender(Student &student) {
    while (true) {
        say("Enter Student's Gender. Options:");
        say("0: Cancel");
        say("1: Male");
        say("2: Female");
        say("3: Not Specified");

        bool gender_set_success = false;
        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return false;
            case 1:
                student.setGender(Student::Male);
                gender_set_success = true;
                break;
            case 2:
                student.setGender(Student::Female);
                gender_set_success = true;
                break;
            case 3:
                student.setGender(Student::NotSpecified);
                gender_set_success = true;
                break;
        }
        if (gender_set_success) {
            say("Gender set to " + student.getGender());
            return true;
        }
    }
}

bool UniCli::setStudentName(Student &student) {
    while (true) {
        say("Enter Student's Name: ");
        std::string input = getInput();
        if (input.find("cancel") != std::string::npos) {
            say("Cancelling Operation...");
            return false;
        }
        if (student.setName(input)) {
            say("Student name set to: " + student.getName());
            return true;
        }
    }
}

UniCli::UniCli(University &uniRef) : uniRef(uniRef) {}

void UniCli::addCourses(Student &student) {
    while (true) {
        say("Which Course? Options:");
        say("0: Cancel");
        auto fac_to_course = uniRef.getFac_to_cours();
        auto course_map = fac_to_course[student.faculty_id];
        //List Courses
        for (auto const &entry : course_map) {
            say(std::to_string(entry.first) + ": " + entry.second);
        }

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                if (course_map.count(input)) {
                    auto course_name = course_map[input];
                    student.addCourse(course_name, student.generateCourseGrade());
                    say("Course Added, New Course List:");
                    student.listCourses();
                }
        }
    }
}

bool UniCli::setStudentDepartment(Student &student) {
    bool setting_department = true;
    while (setting_department) {
        say("To which Department? Options:");
        say("0: Cancel");
        auto faculty_map = uniRef.getFaculty_map();
        auto fac_to_dep = uniRef.getFac_to_dep();
        auto department = fac_to_dep[student.faculty_id];
        for (auto const &entry : department) {
            say(std::to_string(entry.first) + ": " + entry.second);
        }

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return false;
            default:
                if (department.count(input)) {
                    student.setDepartmentName(department[input]);
                    say("Faculty set to " + student.getDepartmentName());
                    return true;
                }
        }
    }
}

bool UniCli::setStudentFaculty(Student &student) {
    bool setting_faculty = true;
    while (setting_faculty) {
        say("To which Faculity? Options:");
        say("0: Cancel");
        auto faculty_map = uniRef.getFaculty_map();
        for (auto const &entry : faculty_map) {
            say(std::to_string(entry.first) + ": " + entry.second);
        }

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return false;
            default:
                if (faculty_map.count(input)) {
                    student.faculty_id = input;
                    student.setFacultyName(faculty_map[input]);
                    say("Faculty set to " + student.getFacultyName());
                    setting_faculty = false;
                    return true;
                }
        }
    }
}

void UniCli::updateStudent() {
    while (true) {

        say("Select Student to Update:");
        say("0: Cancel");
        uniRef.listStudents();

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                try {
                    Student &student = uniRef.getStudent(input - 1);
                    std::cout << "You selected student " << student.getId() << std::endl;
                    say("0 - Cancel");
                    say("1 - Edit Name");
                    say("2 - Edit Email");
                    say("3 - Add Courses");
                    say("4 - Remove Courses");


                    input = getNumberInput();
                    switch (input) {
                        case 0:
                            say("Cancelling Operation...");
                            break;
                        case 1:
                            //Name
                            while (true) {
                                if (setStudentName(student))
                                    break;
                            }
                            break;
                        case 2:
                            //Email
                            while (true) {
                                if (setStudentMail(student))
                                    break;
                            }
                            break;
                        case 3:
                            //Add Courses
                            addCourses(student);
                            break;

                        case 4:
                            //Remove Courses
                            removeCourses(student);
                            break;
                    }
                }
                catch (const char *msg) {
                    say(msg);
                    break;
                }
        }
    }
}

void UniCli::removeCourses(Student &student) {
    while (true) {
        say("Remove Which Course? Options:");
        say("0: Cancel");
        student.listCourses();

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                student.removeCourse(input - 1);
                say("Course Removed, New Course List:");
                student.listCourses();
        }
    }
}

void UniCli::displayStudent() {
    while (true) {
        say("Select Student to Display:");
        say("0: Cancel");
        uniRef.listStudents();

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                try {
                    Student &student = uniRef.getStudent(input - 1);
                    std::cout << "You selected student " << student.getId() << std::endl;
                    student.displayStudent();
                    say("With courses:");
                    student.listCourses();
                }
                catch (const char *msg) {
                    say(msg);
                    break;
                }
        }
    }
}

void UniCli::removeStudent() {
    while (true) {
        say("Select Student to Remove:");
        say("0: Cancel");
        uniRef.listStudents();

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                uniRef.removeStudent(input - 1);
        }
    }
}
