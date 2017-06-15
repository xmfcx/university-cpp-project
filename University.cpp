//
// Created by mfc on 06.06.2017.
//

#include "University.h"

University::University() {
    lastStudentId = 10000000;
    faculty_map = {
            {1, "Faculty of Mechanical Engineering"},
            {2, "Faculty of Electrical & Electronics"},
            {3, "Faculty of Architecture"}
    };
    //Department Maps
    fac_mecha = {
            {1, "Department of Industrial Engineering"},
            {2, "Department of Mechanical Engineering"},
            {3, "Department of Mechatronics Engineering"}
    };

    fac_electro = {
            {1, "Department of Computer Engineering"},
            {2, "Department of Electrical Engineering"},
            {3, "Department of Electronics & Communications Engineering"},
            {4, "Department of Control and Automation Engineering"}
    };
    fac_architec = {
            {1, "Department of Architecture"},
            {2, "Department of Urban and Regional Planning"}
    };
    //Faculty to Department Map
    fac_to_dep = {
            {1, fac_mecha},
            {2, fac_electro},
            {3, fac_architec}
    };


    //Course Maps
    cours_mecha = {
            {1,  "Introduction to Industrial Engineering"},
            {2,  "Mathematics 1"},
            {3,  "Computer Aided Design"},
            {4,  "Physics 1"},
            {5,  "Advanced English I"},
            {6,  "Turkish Language 1"},
            {7,  "Turkish language 2"},
            {8,  "Advanced English II"},
            {9,  "Mathematics 2"},
            {10, "Physics 2"},
            {11, "General Chemistry"},
            {12, "Introductory Computer Sciences"},
            {13, "Differential Equations"},
            {14, "Cost Accounting in Industrial Engineering"},
            {15, "Principles of Atatürk and History of Modern Turkey I"},
            {16, "Finance"},
            {17, "Probability"},
            {18, "Ergonomy"},
            {19, "Manufacturing Processes"},
            {20, "Principles of Atatürk and History of Modern Turkey II"},
            {21, "Operations Research 1"},
            {22, "Statistics"},
            {23, "System Analysis"},
            {24, "Work Methods and Measurements"}
    };

    cours_electro = {
            {1,  "Introduction to Electronics and Communication Engineering"},
            {2,  "Algorithms and Programming"},
            {3,  "Mathematics 1"},
            {4,  "Physics 1"},
            {5,  "Advanced English I"},
            {6,  "Linear Algebra"},
            {7,  "Occupational Elective 1"},
            {8,  "Elective 1"},
            {9,  "Fundamentals of Electrical Circuits"},
            {10, "SEMICONDUCTOR PHYSICS"},
            {11, "Advanced English II"},
            {12, "Mathematics 2"},
            {13, "Turkish Language 1"},
            {14, "Elective 2"},
            {15, "Basics of Logic Circuits"},
            {16, "Circuits and Systems Analysis"},
            {17, "Engineering Mathematics"},
            {18, "Electromagnetic Field Theory"},
            {19, "Turkish language 2"},
            {20, "General Internship"},
            {21, "Signals and Systems"},
            {22, "Basic Electronic Circuits"},
            {23, "Electromagnetic Wave Theory"},
            {24, "Probability Theory"},
            {25, "Logic Circuit Design"}
    };
    cours_architec = {
            {1,  "Turkish Language 1"},
            {2,  "Advanced English I"},
            {3,  "Mathematics"},
            {4,  "Introduction to Architectural Design"},
            {5,  "Principles of Atatürk and History of Modern Turkey I"},
            {6,  "Architectural Presentation Techniques"},
            {7,  "Building Theory and Design 1"},
            {8,  "Basic Design"},
            {9,  "Building Theory and Design 2"},
            {10, "Turkish language 2"},
            {11, "Principles of Atatürk and History of Modern Turkey II"},
            {12, "Advanced English II"},
            {13, "Social Elective 1"},
            {14, "Architectural Design 1"},
            {15, "Statics and Strenght of Materials"},
            {16, "Building Materials"},
            {17, "Constructional Elements of Building 1"},
            {18, "Computer-Aided Design"},
            {19, "Reading and Speaking in English"},
            {20, "Social Elective 2"},
            {21, "Architectural Design 2"},
            {22, "History of Architecture 1"},
            {23, "Structural Analysis in Architecture"},
            {24, "Constructional Elements of Building 2"},
            {25, "Intership 1"},
            {26, "Introductory Computer Sciences"},
            {27, "Social Elective 3"},
            {28, "History of Architecture 2"},
            {29, "Structural System Design 1"},
            {30, "Social Elective 4"},
            {31, "Social Elective 5"},
            {32, "Architectural Design 3"},
            {33, "Intership 2"}
    };

    //Faculty to Course Map
    fac_to_cours = {
            {1, cours_mecha},
            {2, cours_electro},
            {3, cours_architec}
    };

}

const std::map<int, std::string> &University::getFaculty_map() const {
    return faculty_map;
}

const std::map<int, std::map<int, std::string>> &University::getFac_to_dep() const {
    return fac_to_dep;
}

long University::getStudentAmount() const {
    return students.size();
}

int University::generateStudentId() {
    lastStudentId++;
    return lastStudentId;
}


bool University::addStudent(Student &new_student) {

    new_student.setId(generateStudentId());

    students.push_back(new_student);
}

const std::map<int, std::map<int, std::string>> &University::getFac_to_cours() const {
    return fac_to_cours;
}

void University::listStudents() {
    for (int i = 0; i < students.size(); i++) {
        Student &curStudent = students[i];
        std::cout << i + 1 << " - " << curStudent.getId() << " - " << curStudent.getName() << std::endl;
    }
    std::cout << std::endl;
}

Student &University::getStudent(int i) {
    if (i >= 0 && i < students.size()) {
        return students[i];
    } else
        throw "Select correctly please.";
}

void University::removeStudent(int index) {
    if (index < students.size() && index >= 0) {
        students.erase(students.begin() + index);
    }
}

