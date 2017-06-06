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
    bool isRunning = true;
    int lastStudentId;
    char getChar();
    void say(std::string phrase);
    std::string getInput();
    int getNumberInput();
    int generateStudentId();
    void addStudent();
    void welcomeLetterToWork(char input);
    bool cancelling(std::string input);
    bool setStudentMail(Student &student);
    bool setStudentGender(Student &student);
    bool setStudentName(Student &student);
public:
    const std::map<int, std::map<int, std::string>> &getFac_to_dep() const;
    const std::map<int, std::string> &getFaculty_map() const;
    University();
    int getStudentAmount() const;
    void WelcomeScreen();
};


#endif //UNIVERSITY_UNIVERSITY_H
