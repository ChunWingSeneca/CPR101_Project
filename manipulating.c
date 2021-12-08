/*
Name:         Wing Ho Cheung
Email:        whcheung3@myseneca.ca
ID:           158387209
Date written: 7/12
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
Modifies: char string1[ARRAY] for the maximum length of the string1.
          char string2[ARRAY] for the maximum length of the string2.
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
Modifies: char compare1[ARRAY] for the maximum length of the string1.
          char compare2[ARRAY] for the maximum length of the string2.
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
        if (result < 0)                                             // return negative result: compare1 < compare2
           printf("1st string is less than 2nd\n");
        else if (result == 0)                                       // return result is 0: compare1 = compare2
            printf("1st string is equal to 2nd\n");
        else                                                        // return positive result: compare1 > compare2
            printf("1st string is greater than 2nd\n");
        printf("Type the 1st string to compare (q - to quit):\n");  // prompt user for string1 to keep looping again
        gets(compare1);
    }
    printf("*** End of Comparing Strings Demo ***\n\n");

/* Version 3 */
//>> insert here


}