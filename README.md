---

# File Handling in C - Assessment

## Overview

This repository contains the solution to an academic assessment involving file handling in C. The assessment covers two main tasks:
1. Word counting and converting file contents to uppercase.
2. Writing and reading employee details from a binary file.

The solutions are implemented in C and follow the guidelines provided in the assessment.

## Table of Contents

- [Requirements](#requirements)
- [Task 1: Word Counting and Uppercase](#task-1-word-counting-and-uppercase)
- [Task 2: Employee Binary File](#task-2-employee-binary-file)
- [Compiling and Running the Code](#compiling-and-running-the-code)
- [License](#license)

## Requirements

To run this program, you will need:
- A C compiler (e.g., GCC)
- Access to a terminal or command prompt to run the code

## Task 1: Word Counting and Uppercase

### 1.1 Word Counting Program

This program reads a text file (`file.txt`) and counts the number of words in the file. A word is defined as any sequence of alphabetic characters separated by spaces or punctuation.

#### How it Works:
- The program opens the file and reads it character by character.
- It uses `isalpha()` to determine if the character is part of a word.
- The program counts words by detecting transitions between spaces or punctuation and alphabetic characters.

#### Example:
```text
This is an example text file.
```
- Output: `Total number of words: 5`

### 1.2 Uppercase Conversion Program

This program opens a file (`file.txt`), reads its contents, and writes the contents back in uppercase. The program uses `toupper()` to convert each character to uppercase.

#### How it Works:
- The program reads each character of the file.
- It converts each character to uppercase using `toupper()` and writes it to a temporary file.
- After processing, the program deletes the original file and renames the temporary file to the original name.

---

## Task 2: Employee Binary File

### 2.1 Writing Employee Details to a Binary File

This program allows the user to enter details of 5 employees (email, age, and salary), and it writes this data to a binary file (`employee.bin`).

#### How it Works:
- The program prompts the user for details of each employee.
- It writes the employee data to a binary file using `fwrite()`.

#### Example Input:
```text
Email: john.doe@example.com
Age: 30
Salary: 50000.00
```

### 2.2 Reading Employee Details from a Binary File

This program reads employee details from a binary file (`employee.bin`) and displays them in a readable format (one employee per line).

#### How it Works:
- The program opens the binary file and reads the employee data using `fread()`.
- It prints each employee's details in a formatted manner.

#### Example Output:
```text
Email: john.doe@example.com, Age: 30, Salary: 50000.00
```

---

## Compiling and Running the Code

1. **For Word Counting and Uppercase Programs:**
   - Save the code in `word_count.c` and `uppercase.c`.
   - Compile the programs using the following commands:
     ```bash
     gcc word_count.c -o word_count
     gcc uppercase.c -o uppercase
     ```
   - Run the programs:
     ```bash
     ./word_count
     ./uppercase
     ```

2. **For Employee Binary File Programs:**
   - Save the code in `employee_write.c` and `employee_read.c`.
   - Compile the programs using:
     ```bash
     gcc employee_write.c -o employee_write
     gcc employee_read.c -o employee_read
     ```
   - Run the programs:
     ```bash
     ./employee_write
     ./employee_read
     ```

---

## License

This project is for academic use and is intended for the purpose of the C programming assessment only. All rights reserved.

---
