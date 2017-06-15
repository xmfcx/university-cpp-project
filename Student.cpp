//
// Created by mfc on 05.06.2017.
//

#include <iostream>
#include <ctype.h>
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