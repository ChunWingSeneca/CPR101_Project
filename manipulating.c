/*
Name:         Wing Ho Cheung
Email:        whcheung3@myseneca.ca
ID:           158387209
Date written: 5/12
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
Purpose:  Concatenate one character string to another.
Modifies: char string1[ARRAY] for the maximum length of the string1.
          char string2[ARRAY] for the maximum length of the string2.
*/
/* Version 1 */
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[80];
    char string2[80];
    printf("Type the 1st string (q - to quit):\n");         // prompt user for string1 to start or quit function
    gets(string1);
    while (strcmp(string1, "q") != 0) {                     // keep looping until user input "q" to quit function
        printf("Type the 2nd string:\n");
        gets(string2);
        strcat(string1, string2);                           // concatenate string2 to string1
        printf("Concatenated string is \'%s\'\n", string1);
        printf("Type the 1st string (q - to quit):\n");     // prompt user for string1 to keep looping again
        gets(string1);
    }
    printf("*** End of Concatenating Strings Demo ***\n\n");

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}