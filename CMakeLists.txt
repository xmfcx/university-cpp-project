cmake_minimum_required(VERSION 3.7)
project(university)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Student.cpp Student.h Contact.h Faculty.h Department.h University.cpp University.h)
add_executable(university ${SOURCE_FILES})