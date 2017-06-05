#include <iostream>
#include "Student.h"

int main() {
    auto student1 = new(Student);
    student1->setGender(Student::Male);
    student1->setId(12967001);
    student1->setDate(1994,1,1);
    student1->setName("mfc");

    std::cout << "Gender: " << student1->getGender() << std::endl;
    std::cout << "ID: " << student1->getId() << std::endl;
    std::cout << "Date: " << student1->getDate() << std::endl;
    std::cout << "Name: " << student1->getName() << std::endl;
    return 0;
}