cmake_minimum_required(VERSION 3.5)
project(university)

set(CMAKE_CXX_STANDARD 14)


find_package (Threads)

set(SOURCE_FILES main.cpp Student.cpp Student.h Contact.h Faculty.h Department.h University.cpp University.h UniCli.cpp UniCli.h)
add_executable(university ${SOURCE_FILES})


target_link_libraries (university ${CMAKE_THREAD_LIBS_INIT})