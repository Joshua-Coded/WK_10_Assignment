// File: employee_write.c
#include <stdio.h>

struct Employee {
    char email[50];
    int age;
    double salary;
};

int main() {
    FILE *file;
    struct Employee emp;
    int i;

    // Open the binary file for writing
    file = fopen("employee.bin", "wb");
    if (file == NULL) {
        printf("Error: Could not open file for writing\n");
        return 1;
    }

    // Get details of 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Email: ");
        scanf("%s", emp.email);
        printf("Age: ");
        scanf("%d", &emp.age);
        printf("Salary: ");
        scanf("%lf", &emp.salary);

        // Write employee data to the file
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    // Close the file
    fclose(file);
    printf("Employee details have been written to employee.bin\n");

    return 0;
}

