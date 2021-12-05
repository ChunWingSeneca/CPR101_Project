/*
* Name:         Chun Wing Mak
* Email:        cwmak5@myseneca.ca
* ID:           126998210
* Date written: 5/12
* Course:       CPR101
* Session:      ZEE
* Project:      CRP101 Final Project
* 
* fundamentals.c:CRP101_Project
* 
* 
* source file of fundametals module.
*
*/

#include "fundamentals.h"


/*
* to find the character in the string that user provided by the index that user provided
*/
void fundamentals() {
/* Version 1 */
//>> insert here
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[80];
    char num_input[10];
    unsigned int position;
    printf("Type not empty string (q - to quit):\n");
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
    gets(buffer1);
    while (strcmp(buffer1, "q") != 0) {
        printf("Type the character position within the string:\n");
        gets(num_input);
        position = atoi(num_input);
        if(position >= strlen(buffer1)) {
            position = strlen(buffer1) - 1;
            printf("Too big... Position reduced to max. available\n");
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
        printf("Type not empty string (q - to quit):\n");
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
        gets(buffer1);
    }
    printf("*** End of Indexing Strings Demo ***\n\n");



/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}