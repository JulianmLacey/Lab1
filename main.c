/*******************************************************************************************
 * Programmer: Julian Lacey
 * Class: CptS 122, Fall 2023; Lab Section X
 * Programming Assignment: Lab1Task1
 * Date: August 28, 2023
 * Description: This program prints out a simple "hello world" message.
 *******************************************************************************************/
#include "header.h"

void task1(void)  // Task one - Print Message
{
    printf("Hello World, I am in CptS 122!\n");
}
void task2(void)  // Task 2 - Recursively Reverse a String
{
    char str[] = "Hello World, I am in CptS 122!\n";
    printf("TASK 2: Reverse a String\n");
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n\n", reverseString(str, 0));
}
void task3(void) {  // Task 3 - myStrTok - Fixed Size
    char str2[] = "Hello World, I am in CptS 122!";
    printf("TASK 3: myStrTok\n");
    printf("Original String: %s\n", str2);

    char *tok = myStrTok(str2, ' ');
    while (tok != NULL) {
        printf("%s\n", tok);
        tok = myStrTok(NULL, ' ');
    }
}
void task4Sol1(void) {  // Task 3 - myStrTok - Dynamic Size
    char *string1 = "Hello World";
    char *string2 = "I am in CptS 122!";
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    printf("TASK 3: myStrTok\n");
    printf("First String: %s\nSecond String: %s\n", string1, string2);
    printf("Merged String: %s\n", mergeIntoThird_Fixed(string1, string2, length1, length2));
}

void task4Sol2(void) {
    char *string1 = "Hello World";
    char *string2 = "I am in CptS 122!";
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    printf("TASK 3: myStrTok\n");
    printf("First String: %s\nSecond String: %s\n", string1, string2);
    printf("Merged String: %s\n", mergeIntoThird_Dynamic(string1, string2, length1, length2));
}

void task4Sol3(void) {
    char *string1 = malloc(20 * sizeof(char));
    string1 = "Hello World";
    char *string2 = "I am in CptS 122!";
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    printf("TASK 3: myStrTok\n");
    printf("First String: %s\nSecond String: %s\n", string1, string2);
    printf("Merged String: %s\n", mergeDynamic(string1, string2, length1, length2));
    free(string1);
}

int main() {
    // Task one - Print Message
    // task1();

    // Task 2 - Recursively Reverse a String
    // task2();

    // Task 3 - myStrTok
    // task3();

    // Task 4 - Merge Two Unsorted Arrays
    // Sol 1 - Fixed Size
    // task4Sol1();

    // Sol 2 - Dynamic Size
    // task4Sol2();

    // Sol3 - Without using third array
    // task4Sol3();
    return 0;
}
