/*
Name:         Wing Ho Cheung
Email:        whcheung3@myseneca.ca
ID:           158387209
Date written: 9 Dec 2021
Course:       CPR101
Session:      ZEE
Project:      CPR101 Final Project

manipulating.c : CPR101_Project

source file of manipulating module.
*/

#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
/*
Version 1
Purpose:  Concatenate one character string to another.
Modifies: char string1[] for storing the string, [] for the maximum length of the string1.
          char string2[] for storing the string, [] for the maximum length of the string2.
*/
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[80];
    char string2[80];
    printf("Type the 1st string (q - to quit):\n");                 // prompt user for string1 to start or quit function
    gets(string1);
    while (strcmp(string1, "q") != 0) {                             // keep looping until user input "q" to quit function
        printf("Type the 2nd string:\n");
        gets(string2);
        strcat(string1, string2);                                   // concatenate string2 to string1
        printf("Concatenated string is \'%s\'\n", string1);
        printf("Type the 1st string (q - to quit):\n");             // prompt user for string1 to keep looping again
        gets(string1);
    }
    printf("*** End of Concatenating Strings Demo ***\n\n");

/*
Version 2
Purpose:  Compare one character string to another.
Modifies: char compare1[] for storing the string, [] for the maximum length of the compare1.
          char compare2[] for storing the string, [] for the maximum length of the compare2.
          int result for getting the compared result.
*/
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[80];
    char compare2[80];
    int result;
    printf("Type the 1st string to compare (q - to quit):\n");      // prompt user for compare1 to start or quit function
    gets(compare1);
    while (strcmp(compare1, "q") != 0) {                            // keep looping until user input "q" to quit function
        printf("Type the 2nd string to compare:\n");
        gets(compare2);
        result = strcmp(compare1, compare2);                        // get result by comparing compare1 to compare2
        if (result < 0)                                             // if return negative result: compare1 < compare2
           printf("1st string is less than 2nd\n");
        else if (result == 0)                                       // if return result is 0: compare1 = compare2
            printf("1st string is equal to 2nd\n");
        else                                                        // if return positive result: compare1 > compare2
            printf("1st string is greater than 2nd\n");
        printf("Type the 1st string to compare (q - to quit):\n");  // prompt user for compare1 to keep looping again
        gets(compare1);
    }
    printf("*** End of Comparing Strings Demo ***\n\n");

/*
Version 3
Purpose:  Search the first occurrence of substring in one character string.
Modifies: char big_string[] for storing the full string, [] for the maximum length of the big_string.
          char sub_string[] for storing the substring, [] for the maximum length of the sub_string.
          char address as pointer to get the first occurrence result.
*/
    printf("*** Start of Searching Strings Demo *** \n");
    char big_string[80];
    char sub_string[80];
    char* address;
    printf("Type the big string (q - to quit):\n");                 // prompt user for big_string to start or quit function
    gets(big_string);
    while (strcmp(big_string, "q") != 0) {                          // keep looping until user input "q" to quit function
        printf("Type the substring:\n");
        gets(sub_string);
        address = strstr(big_string, sub_string);                   // get address by searching the first occurrence of sub_string in big_string
        if (address != NULL)                                        // if return result is valid, print occurred position
            printf("Found at %ld position\n", (long)address - (long)big_string);
        else                                                        // if return result is NULL, print not found message
            printf("Not found\n");
        printf("Type the big string (q - to quit):\n");             // prompt user for big_string to keep looping again
        gets(big_string);
    }
    printf("*** End of Searching Strings Demo ***\n\n");

}