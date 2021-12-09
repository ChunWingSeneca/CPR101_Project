/*
Name:         Wing Ho Cheung
Email:        whcheung3@myseneca.ca
ID:           158387209
Date written: 9 Dec 2021
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
Version 1
Purpose:  Break a string into a series of words using delimiter.
Modifies: char words[] for storing the string, [] for the maximum length of string.
          char* word as pointer to get broken words for printf.
          int w_counter as index number for printf.
*/
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[200];
    char* word;
    int w_counter;
    printf("Type a few words separated by space(q - to quit):\n");          // prompt user for words to start or quit function
    gets(words);
    while (strcmp(words, "q") != 0) {                                       // keep looping until user input "q" to quit function
        word = strtok(words, " ");                                          // break the string into a series of words using delimiter " " (sapce)
        w_counter = 1;
        while (word) {                                                      // keep looping until all tokenized words are printed
            printf("Word #%d is \'%s\'\n", w_counter++, word);              // w_counter keep increment for printf
            word = strtok(NULL, " ");                                       // reset word to NULL for continue tokenizing previous words
        }
        printf("Type a few words separated by space(q - to quit):\n");      // prompt user for words to keep looping again
        gets(words);
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");

/*
Version 2
Purpose:  Break a string into a series of phrases using delimiter.
Modifies: char phrases[] for storing the string, [] for the maximum length of string.
          char* phrase as pointer to get broken phrases for printf.
          int p_counter as index number for printf.
*/
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[200];
    char* phrase;
    int p_counter;
    printf("Type a few phrases separated by comma(q - to quit):\n");        // prompt user for phrases to start or quit function
    gets(phrases);
    while (strcmp(phrases, "q") != 0) {                                     // keep looping until user input "q" to quit function
        phrase= strtok(phrases, ",");                                       // break the string into a series of phrases using delimiter "," (comma)
        p_counter = 1;
        while (phrase) {                                                    // keep looping until all tokenized phrases are printed
            printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);          // p_counter keep increment for printf
            phrase = strtok(NULL, ",");                                     // reset phrase to NULL for continue tokenizing previous phrases
        }
        printf("Type a few phrases separated by comma(q - to quit):\n");    // prompt user for phrases to keep looping again
        gets(phrases);
    }
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

/*
Version 3
Purpose:  Break a string into a series of sentences using delimiter.
Modifies: char sentences[] for storing the string, [] for the maximum length of string.
          char* sentence as pointer to get broken sentences for printf.
          int s_counter as index number for printf.
*/
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[200];
    char* sentence;
    int s_counter;
    printf("Type a few sentences separated by dot(q - to quit):\n");        // prompt user for sentences to start or quit function
    gets(sentences);
    while (strcmp(sentences, "q") != 0) {                                   // keep looping until user input "q" to quit function
        sentence = strtok(sentences, ".");                                  // break the string into a series of sentences using delimiter "." (dot)
        s_counter = 1;
        while (sentence) {                                                  // keep looping until all tokenized sentences are printed
            printf("sentence #%d is \'%s\'\n", s_counter++, sentence);      // s_counter keep increment for printf
            sentence = strtok(NULL, ".");                                   // reset sentence to NULL for continue tokenizing previous sentences
        }
        printf("Type a few sentences separated by dot(q - to quit):\n");    // prompt user for sentences to keep looping again
        gets(sentences);
    }
    printf("*** End of Tokenizing Sentences Demo ***\n\n");

}