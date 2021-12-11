/*
* Name:         Chun Wing Mak
* Email:        cwmak5@myseneca.ca
* ID:           126998210
* Date written: 10/12
* Course:       CPR101
* Session:      ZEE
* Project:      CPR101 Final Project
* 
* fundamentals.c: CPR101_Project
* 
* 
* Purpose: source file of fundametals module.
*
*/

#include "fundamentals.h"

/*
* Purpose:
* part 1 : to find the character in the string that user provided by the index that user provided, print the value on screen,  and loop until user exit
* part 2 : calculate the string length of user input, print the value on screen, and loop until user exit
* part 3 : copy the string that user input from the source of string to the new destination of string
* 
*/
void fundamentals()
{
    /* Version 1 */
    //>> insert here
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80];
    char num_input[10];
    unsigned int position;
    printf("Type not empty string (q - to quit):\n");
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
    gets(buffer1);                    // receive user input of string
    while (strcmp(buffer1, "q") != 0) // if the user input isn't exit ( input q ), keep the looping
    {
        printf("Type the character position within the string:\n");
        gets(num_input); // receive user input of integer for position
        position = atoi(num_input);
        if (position >= strlen(buffer1)) // if the input position is larger than string length, set it to string length - 1
        {
            position = strlen(buffer1) - 1;                            // set the position to last digit in string
            printf("Too big... Position reduced to max. available\n"); // print the warning message
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]); // find the character in selected position in the string , then print the result
        printf("Type not empty string (q - to quit):\n");
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
        gets(buffer1); // receive user input of string
    }
    printf("*** End of Indexing Strings Demo ***\n\n");

    /* Version 2 */
    //>> insert here

    printf("*** Start of Measureing Strings Demo ***\n");
    char buffer2[80];
    printf("Type a string (q - to quit):\n");
    gets(buffer2);                    // receive user input of string
    while (strcmp(buffer2, "q") != 0) // if the user input isn't exit ( input q ), keep the looping
    {
        printf("The length is %lu\n", strlen(buffer2)); // print the string length of user input
        printf("Type a string (q - to quit):\n");
        gets(buffer2); // receive user input of string
    }
    printf("*** End of Measuring Strings Demo ***\n\n");

    /* Version 3 */
    //>> insert here

    printf("*** Start of copying Strings Demo ***\n");
    char destination[80];
    char source[80];
    destination[0] = '\0'; // reset the string to empty in destination
    printf("Destination string is reset to empty\n");
    printf("Type a source string (q - to quit):\n");
    gets(source);                    // receive user input of string
    while (strcmp(source, "q") != 0) // if the user input isn't exit ( input q ), keep the looping
    {
        strcpy(destination, source);                                // copy the string to destination
        printf("New destination string is \'%s\':\n", destination); // print the result
        destination[0] = '\0';                                      // reset the string to empty in destination
        printf("Destination string is reset to empty\n");           // print notice
        printf("Type a source string (q - to quit):\n");            // request for user input
        gets(source);                                               // receive user input of string
    }
    printf("*** End of copying Strings Demo ***\n\n");
}