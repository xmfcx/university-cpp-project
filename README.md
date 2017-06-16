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

And it is now asking you to select courses. It will also give you random grades once you chose courses.

When you are done adding courses you can enter `0` and it will create the student for you and generate you an ID.

```
1 (A course)
4 (A course)
5 (A course)
23 (A course)
0 (Cancel)
```
![add student](https://image.ibb.co/mVvCOQ/Screenshot_2017_06_16_12_44_23.png)

Also when you add a student, program automatically creates a [StudentID].bin file

![add student](https://image.ibb.co/dG1xq5/Screenshot_2017_06_16_12_48_02.png)
