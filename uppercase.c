// File: uppercase.c
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file, *temp_file;
    char ch;

    // Open the original file for reading
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    // Create a temporary file to store the converted text
    temp_file = fopen("temp.txt", "w");
    if (temp_file == NULL) {
        printf("Error: Could not create temporary file\n");
        fclose(file);
        return 1;
    }

    // Read each character and write its uppercase equivalent to the temporary file
    while ((ch = fgetc(file)) != EOF) {
        fputc(toupper(ch), temp_file);
    }

    // Close both files
    fclose(file);
    fclose(temp_file);

    // Delete the original file and rename the temporary file to the original name
    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("File contents have been converted to uppercase.\n");
    return 0;
}

