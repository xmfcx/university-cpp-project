//
// Created by mfc on 15.06.2017.
//

#include "UniCli.h"

void UniCli::say(std::string phrase) {
    std::cout << phrase << std::endl;
}

char UniCli::getChar() {
    char input;
    std::cin >> input;
    return input;
}


std::string UniCli::getInput() {
    std::string input;
    std::cin >> input;
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
            addStudent();
            break;
        case 'u' :
            addStudent();
            break;
        case 'd' :
            addStudent();
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
        say("Type [Cancel] and press [Enter] anytime to cancel.");
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

    int faculty_id = 0;
    //Faculty
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
                return;
            default:
                if (faculty_map.count(input)) {
                    faculty_id = input;
                    student_new.setFacultyName(faculty_map[input]);
                    say("Faculty set to " + student_new.getFacultyName());
                    setting_faculty = false;
                }
        }
    }


    //Department
    bool setting_department = true;
    while (setting_department) {
        say("To which Department? Options:");
        say("0: Cancel");
        auto faculty_map = uniRef.getFaculty_map();
        auto fac_to_dep = uniRef.getFac_to_dep();
        auto department = fac_to_dep[faculty_id];
        for (auto const &entry : department) {
            say(std::to_string(entry.first) + ": " + entry.second);
        }

        int input = getNumberInput();
        switch (input) {
            case 0:
                say("Cancelling Operation...");
                return;
            default:
                if (faculty_map.count(input)) {
                    student_new.setDepartmentName(department[input]);
                    say("Faculty set to " + student_new.getDepartmentName());
                    setting_department = false;
                }
        }
    }


    //Name
    if (!setStudentName(student_new))
        return;

    //Gender
    if (!setStudentGender(student_new))
        return;

    //Email
    if (!setStudentMail(student_new))
        return;

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
        auto input = getInput();
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

