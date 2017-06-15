//
// Created by mfc on 15.06.2017.
//

#ifndef UNIVERSITY_UNICLI_H
#define UNIVERSITY_UNICLI_H

#include "Student.h"
#include "University.h"


class UniCli {
private:
    char getChar();
    std::string getInput();
    int getNumberInput();
    void say(std::string phrase);

    void addStudent();
    void welcomeLetterToWork(char input);
    bool cancelling(std::string input);
    bool setStudentMail(Student &student);
    bool setStudentGender(Student &student);
    bool setStudentName(Student &student);

    bool isRunning = true;

    University& uniRef;
public:
    UniCli(University &uniRef);

    void welcomeScreen();
};


#endif //UNIVERSITY_UNICLI_H
