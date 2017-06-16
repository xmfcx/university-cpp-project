# Software Design Document
Here is an overall view of the entire code created with VS Code Map:

![Code Map](https://image.ibb.co/hMj3DQ/devenv_2017_06_16_15_31_02.png)

## Student Class

Student Class inherits from Contact and Department Classes.

And Department Class inherits the Faculty class.

![Code Map](https://vgy.me/s6aeCi.png)

Here you can see more detailed top view on these interconnected 4 classes:

![Code Map](https://vgy.me/r2xnty.png)


## Basical IO Scheme

* Read existing .bin files upon program opening and fill them into the University Object.
* And write student into .bin files when user Adds or Updates a student.
* And remove .bin file when user deletes the corresponding student with ID.
* Utilize threads while writing or reading .bin files. (saveStudent and loadStudent methods in UniCli class)

## Code in General
* Everything in code is written in a readable object oriented fashion and it is easy to extend it and maintain it.
