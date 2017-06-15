#include <iostream>
#include "Student.h"
#include "UniCli.h"

int main() {
    /*
    auto student1 = Student();
    student1.setName("Fatih Cirit");
    student1.setGender(Student::Male);
    student1.setDate(1994, 4, 26);
    student1.setPhoneNum(5511421052);
    student1.setDepartmentName("Department of Mechatronics");
    student1.faculty_id = 1;
    student1.setFacultyName("Faculity of Mechanics");
    student1.addCourse("aaa", 55);
    student1.addCourse("bbb", 100);
    student1.addCourse("cccc", 33);

    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "ID: " << student1.getId() << std::endl;
    std::cout << "Date: " << student1.getDate() << std::endl;
    std::cout << "Phone: " << student1.getPhoneNum() << std::endl;
    std::cout << "Department: " << student1.getDepartmentName() << std::endl;
    std::cout << "Faculity: " << student1.getFacultyName() << std::endl;




    auto student2 = Student();
    student2.setName("skldhgls AAA");
    student2.setGender(Student::Male);
    student2.setDate(1994, 4, 26);
    student2.setPhoneNum(5511421052);
    student2.setDepartmentName("Department of Mechatronics");
    student2.setFacultyName("Faculity of Mechanics");
    student1.faculty_id = 1;
    student2.addCourse("ggg", 55);
    student2.addCourse("ghhhh", 100);
    student2.addCourse("wwww", 33);

    student1.displayStudent();
    student1.listCourses();
    student2.displayStudent();
    student2.listCourses();
*/
    auto uni = University();
  //  uni.addStudent(student1);
 //   uni.addStudent(student2);
//    uni.listStudents();

    auto uniCli = UniCli(uni);
    uniCli.welcomeScreen();

    return 0;
}