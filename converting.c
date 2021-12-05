#include "converting1.h"

/*
Origin: Kin Lok Chan, klchan11@myseneca.ca, 119293215, 5 Dec 2021, CRP101, Project
[converting1.c] : [CRP101]
Purpose:
    Function coverting will covert the numbers in the string argument to integer.
    Changing the argument from type str to type int.
    And the function is expected to convert all the numbers in the string untill the first alphabet.
    Strings start with alphabet will not covert any character.
*/

void converting() {
/* Version 1 */

    printf("*** Start of Converting Strings to int Demo ***\n");
    char int_string[80];
    int int_number;
    printf("Type the int numeric string (q - to quit):\n");
    gets(int_string);
    while (strcmp(int_string, "q") != 0){
        int_number = atoi(int_string);
        printf("Converted number is %d\n", int_number);
        printf("Type the int numeric string (q - to quit):\n");
        gets(int_string);
    }
    printf("*** End of Converting Strings to int Demo ***\n\n");

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}
