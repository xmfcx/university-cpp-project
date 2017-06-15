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


bool University::addStudent(Student &new_student){

    new_student.setId(generateStudentId());

    students.push_back(new_student);
}



