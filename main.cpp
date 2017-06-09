#include <iostream>
#include "Student.h"
#include "University.h"

int main() {
    auto student1 = Student();
    student1.setName("Fatih Cirit");
    student1.setGender(Student::Male);
    student1.setDate(1994, 4, 26);
    student1.setPhoneNum(5511421052);
    student1.setDepartmentName("Department of Mechatronics");
    student1.setFacultyName("Faculity of Mechanics");

    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "ID: " << student1.getId() << std::endl;
    std::cout << "Date: " << student1.getDate() << std::endl;
    std::cout << "Phone: " << student1.getPhoneNum() << std::endl;
    std::cout << "Department: " << student1.getDepartmentName() << std::endl;
    std::cout << "Faculity: " << student1.getFacultyName() << std::endl;
    auto uni = University();
    uni.WelcomeScreen();

    return 0;
}