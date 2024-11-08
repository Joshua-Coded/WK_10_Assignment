// File: employee_read.c
#include <stdio.h>

struct Employee {
    char email[50];
    int age;
    double salary;
};

int main() {
    FILE *file;
    struct Employee emp;

    // Open the binary file for reading
    file = fopen("employee.bin", "rb");
    if (file == NULL) {
        printf("Error: Could not open file for reading\n");
        return 1;
    }

    // Read and display employee details
    printf("Employee details:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("Email: %s, Age: %d, Salary: %.2f\n", emp.email, emp.age, emp.salary);
    }

    // Close the file
    fclose(file);
    return 0;
}

