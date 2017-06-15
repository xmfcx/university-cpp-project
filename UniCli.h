//
// Created by mfc on 15.06.2017.
//

#ifndef UNIVERSITY_UNICLI_H
#define UNIVERSITY_UNICLI_H

#include "Student.h"
#include "University.h"
#include <fstream>
#include <string>
#include <thread>
#include <dirent.h>


class UniCli {
private:
    bool isRunning = true;

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

    bool setStudentDepartment(Student &student);

    bool setStudentFaculty(Student &student);

    void addCourses(Student &student);

    void removeCourses(Student &student);

    void updateStudent();

    void displayStudent();

    void removeStudent();


    static void saveStudent(Student *student);

    void loadStudent(int id);

    void readStudents();

    University &uniRef;
public:
    UniCli(University &uniRef);

    void welcomeScreen();
};


#endif //UNIVERSITY_UNICLI_H
