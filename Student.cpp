//
// Created by mfc on 05.06.2017.
//

#include <iostream>
#include "Student.h"

void Student::setGender(Student::Gender gender) {
    Student::gender = gender;
}

std::string Student::getGender() {
    if (gender == Male)
        return "Male";
    else if (gender == Female)
        return "Female";
    else
        return "NotSpecified";
}

bool Student::setId(int Id) {
    if (Id > 10000000 && Id < 20000000) {
        Student::id = Id;
        return true;
    } else {
        std::cout << "ID must be between 1000 0000 and 2000 0000" << std::endl;
        return false;
    }
}

int Student::getId() {
    return id;
}

bool Student::setDate(int year, int month, int day) {

    if (day < 1 || month < 1 || year < 1900) {
        std::cout << "Day or Month or Year is too small" << std::endl;
        return false;
    } else if (day > 31 || month > 12 || year > 9999) {
        std::cout << "Day or Month or Year is too large" << std::endl;
        return false;
    }
    date.Day = day;
    date.Month = month;
    date.Year = year;
    return true;
}

std::string Student::getDate() {
    std::string word = std::to_string(date.Year) + "-" +
                       std::to_string(date.Month) + "-" +
                       std::to_string(date.Day);
    return word;
}


bool Student::setName(const std::string &name) {
    bool name_is_letter_only = true;
    for (int i = 0; i < name.length(); i++) {
        if (!(isalpha(name[i]) || name[i] == ' ')) {
            name_is_letter_only = false;
            break;
        }
    }

    if (!name_is_letter_only) {
        std::cout << "Name can only contain English letters." << std::endl;
        return false;
    }
    Student::name = name;
    return true;
}

const std::string &Student::getName() const {
    return name;
}

void Student::setEmail(const std::string &email) {
    Student::email = email;
}

const std::string &Student::getEmail() const {
    return email;
}

void Student::displayStudent() {
    std::cout << "Student with ID: " << getId() << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Gender: " << getGender() << std::endl;
    std::cout << "Age: " << getAge() << std::endl;
    std::cout << "Date: " << getDate() << std::endl;
    std::cout << "Phone: " << getPhoneNum() << std::endl;
    std::cout << "Department: " << getDepartmentName() << std::endl;
    std::cout << "Faculity: " << getFacultyName() << std::endl;
    std::cout << std::endl;
}

void Student::addCourse(std::string course_name, int grade) {
    auto coursgrad = CourseGrade();
    coursgrad.Course = course_name;
    coursgrad.Grade = grade;
    courses.push_back(coursgrad);
}

void Student::listCourses() {
    for (int i = 0; i < courses.size(); i++) {
        CourseGrade &coursgrad = courses[i];
        std::cout << i + 1 << " - " << coursgrad.Course << ": " << coursgrad.Grade << std::endl;
    }
    std::cout << std::endl;
}

void Student::removeCourse(int index) {
    if (index < courses.size() && index >= 0) {
        courses.erase(courses.begin() + index);
    }
}

int Student::generateCourseGrade() {
    int min = 0;
    int max = 100;
    return min + (rand() % static_cast<int>(max - min + 1));
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

