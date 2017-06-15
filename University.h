//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_UNIVERSITY_H
#define UNIVERSITY_UNIVERSITY_H


#include <iostream>
#include <vector>
#include <map>
#include <exception>
#include "Student.h"

class University {
private:
    std::vector<Student> students;

    std::map<int, std::string> faculty_map;
    std::map<int, std::string> fac_mecha;
    std::map<int, std::string> fac_electro;
    std::map<int, std::string> fac_architec;
    std::map<int, std::map<int, std::string>> fac_to_dep;

    int lastStudentId;
    int generateStudentId();
public:
    const std::map<int, std::map<int, std::string>> &getFac_to_dep() const;
    const std::map<int, std::string> &getFaculty_map() const;
    University();
    long getStudentAmount() const;
    bool addStudent(Student &new_student);
};


#endif //UNIVERSITY_UNIVERSITY_H
