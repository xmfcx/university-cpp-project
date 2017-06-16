#include <iostream>
#include "Student.h"
#include "UniCli.h"

int main() {
    auto uni = University();
    auto uniCli = UniCli(uni);
    uniCli.welcomeScreen();

    return 0;
}