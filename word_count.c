/*
 * Author: Joshua Alana..
 * Date Created: 08/11/2024
 * Purpose: File handling utilities
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int word_count = 0;
    int in_word = 0;

    // open the file for reading
    file = fopen("file.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file\n");
        return 1;
    }

    // read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        // let's check if the character is a letter
        if (isalpha(ch))
        {
            if (!in_word)
            {
                in_word = 1;
                word_count++;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    printf("Total number of words: %d\n", word_count);

    // close the file
    fclose(file);
    return 0;
}