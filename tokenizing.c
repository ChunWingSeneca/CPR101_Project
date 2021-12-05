/*
Name:         Wing Ho Cheung
Email:        whcheung3@myseneca.ca
ID:           158387209
Date written: 5/12
Course:       CPR101
Session:      ZEE
Project:      CPR101 Final Project

tokenizing.c : CPR101_Project

source file of tokenizing module.
*/

#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing() {
/*
Purpose:  Break string into a series of tokens using the delimiter.
Modifies: char words[ARRAY] for the maximum length of the string.
          char *word as pointer to get broken string for printf.
          int w_counter for printf to loop as index number.
*/
/* Version 1 */
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[200];
    char *word;
    int w_counter;
    printf("Type a few words separated by space(q - to quit):\n");          // prompt user for words to start or quit function
    gets(words);
    while (strcmp(words, "q") != 0) {                                       // keep looping until user input "q" to quit function
        word = strtok(words, " ");                                          // break words using delimiter " " (sapce)
        w_counter = 1;
        while (word) {                                                      // keep looping until all tokenized words are printed
            printf("Word #%d is \'%s\'\n", w_counter++, word);
            word = strtok(NULL, " ");
        }
        printf("Type a few words separated by space(q - to quit):\n");      // prompt user for words to keep looping again
        gets(words);
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}