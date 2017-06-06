//
// Created by mfc on 06.06.2017.
//

#ifndef UNIVERSITY_CLI_H
#define UNIVERSITY_CLI_H

#include <iostream>

class CLI {
public:
    int studentNumber = 0;

    void LetterToWork(char input) {
        input = std::tolower(input, std::locale());
        if (input == 'a')
            AddStudent();
        else if (input == 'r')
            AddStudent();
        else if (input == 'u')
            AddStudent();
        else if (input == 'd')
            AddStudent();
    }

    void WelcomeScreen() {
        std::cout << std::endl << std::endl << std::endl;
        std::cout << "Welcome To Student Manager 2000!!!" << std::endl;
        std::cout << "Currently there are " << studentNumber << " students registered." << std::endl;
        std::cout << "Press A to add, R to remove, U to update, D to display user: " << std::endl;
        char input;
        std::cin >> input;
        LetterToWork(input);
        WelcomeScreen();
    }

    void AddStudent() {
        std::cout << "Adding New Student..." << std::endl;
        std::cout << "Enter Name: " << std::endl;

    }

};


#endif //UNIVERSITY_CLI_H
