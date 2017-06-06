//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_DEPARTMENT_H
#define UNIVERSITY_DEPARTMENT_H


#include "Faculty.h"

class Department : public Faculty {
private:
    std::string departmentName;
public:
    const std::string &getDepartmentName() const {
        return departmentName;
    }

    void setDepartmentName(const std::string &departmentName) {
        Department::departmentName = departmentName;
    }
};


#endif //UNIVERSITY_DEPARTMENT_H
