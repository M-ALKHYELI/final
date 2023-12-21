# Assignment Grading System
## Overview
The Assignment Grading System is a simple command-line application designed to facilitate the process of grading assignments for a specific course. This application allows users to input essential information such as the course department, course number, course name, assignment name, and points possible for the assignment. It then enables the user to record scores for a specified number of students, utilizing dynamic arrays to store the scores. The scores can be sorted in ascending order using a recursive bubble sort algorithm.

## Intended Audience
The intended audience for this application includes educators, instructors, or anyone involved in grading assignments for academic courses. It aims to streamline the grading process and provide a convenient way to organize and sort scores.

## Problem Statement
Grading assignments manually can be a time-consuming task, especially when dealing with a large number of students. This application addresses the need for a simple tool that allows users to efficiently enter, organize, and sort assignment scores, ultimately saving time and reducing manual effort.

## Features
- **User Input**: The application prompts the user to enter relevant information, including course department, course number, course name, assignment name, points possible, and the number of students to be scored.

- **Dynamic Array**: A dynamic array is created to store the scores for the specified number of students. The array is dynamically allocated using the new keyword.

- **Score Entry**: The application utilizes a loop to prompt the user to enter scores for each student. The loop iterates for the specified number of students, as indicated during the initial setup.

- **Recursive Bubble Sort**: A function is implemented to sort the entered scores in ascending order using a recursive bubble sort algorithm. This ensures that the scores are organized numerically.

- **Readability**: The application provides clear prompts and instructions to guide the user through the grading process, enhancing overall user experience.

# How to Use
Clone the repository to your local machine:
```
git clone https://$USER_NAME/FINAL-assignment-grading-system
```
Change directory to `verif`:
```
cd verif/
```
Build the C++ codes using the `Makefile` in `verif` directory:
```
make
```
Run the code to see the output:
```
./final
```

The application will display the sorted scores in ascending order.
Feel free to customize and integrate this application into your grading workflow to simplify the assignment grading process. If you encounter any issues or have suggestions for improvement, please refer to the [Issues](https://github.com/$USER_NAME/FINAL-assignment-grading-system/issues) section on GitHub.