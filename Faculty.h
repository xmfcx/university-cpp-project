//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_FACULTY_H
#define UNIVERSITY_FACULTY_H

#include <string>


class Faculty {
private:
    std::string facultyName;
public:
    const std::string &getFacultyName() const {
        return facultyName;
    }

    void setFacultyName(const std::string &facultyName) {
        Faculty::facultyName = facultyName;
    }
};


#endif //UNIVERSITY_FACULTY_H
