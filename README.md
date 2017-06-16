# university-cpp-project

## Build

### Requirements

* gnu c++ compiler

* cmake 3.5 (minimum)

### Build Instructions

To build the application, follow these steps:
```
cd .../university-cpp-project/
mkdir build
cd build
cmake ..
make -j4
```
That's it, you now should have the university executable file in your build directory.

![building](https://image.ibb.co/ihAwiQ/Screenshot_2017_06_16_12_17_34.png)

## Run
```
cd .../university-cpp-project/
cd build
sudo chmod +x university
(enter your password)
./university
```
Application must have started now!

![running](https://image.ibb.co/dAM8xk/Screenshot_2017_06_16_12_30_39.png)

## How to Use
Actually, everything should be clear just from the Command Line Interface but let's add a Student to this university together.

I will give you the instruction list to perform basic operations.

### Add a student
```
a (Add Student)
2 (Faculty of Electrical & Electronics)
4 (Department of Control and Automation Engineering)
Studento Nameo (Student Name)
1 (Male)
20 (Age)
1234567890 (Phone)
studento@smail.com (Email)
```
Until this step you should have something like this:

![add student](https://image.ibb.co/cxSWHk/Screenshot_2017_06_16_12_39_37.png)

