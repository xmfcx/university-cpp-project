//
// Created by mfc on 05.06.2017.
//

#ifndef UNIVERSITY_STUDENT_H
#define UNIVERSITY_STUDENT_H

#include <string>
#include <vector>
#include "Contact.h"
#include "Department.h"


class Student : public Contact, public Department {
public:
    //Gender
    enum Gender {
        Male,
        Female,
        NotSpecified
    };

    void setGender(Gender gender);

    std::string getGender();

    //ID
    bool setId(int Id);

    int getId();

    //Date
    struct Date {
        int Day;
        int Month;
        int Year;
    };

    bool setDate(int year, int month, int day);

    std::string getDate();

    //Name
    bool setName(const std::string &name);


    const std::string &getName() const;

    //Email
    void setEmail(const std::string &email);

    const std::string &getEmail() const;


    struct CourseGrade {
        std::string Course;
        float Grade;
    };
    std::vector<CourseGrade> courses;


    void displayStudent();

    void addCourse(std::string course_name, int grade);

    void listCourses();

    void removeCourse(int index);

    int generateCourseGrade();

private:
    Gender gender;
    int id;
    Date date;
    int age;
public:
    int getAge() const;

    void setAge(int age);

private:
    std::string name;
    std::string email;

};


#endif //UNIVERSITY_STUDENT_H
