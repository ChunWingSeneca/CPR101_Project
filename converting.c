#include "converting.h"

/*
Origin: Kin Lok Chan, klchan11@myseneca.ca, 119293215, 5 Dec 2021, CPR101, Project
[converting1.c] : [CPR101]
Purpose:
    Function coverting will covert the numbers in the string argument to integer and floating number.
    Changing the argument from type str to type int and double.
    And the function is expected to convert all the numbers in the string untill the first alphabet.
    Strings start with alphabet will not covert any character.
*/

void converting() {
/* Version 1 */

    printf("*** Start of Converting Strings to int Demo ***\n");
    char int_string[80];
    int int_number;
    printf("Type the int numeric string (q - to quit):\n");     //prompt user for string to be converted to integer or quit the function if q is entered
    gets(int_string);
    while (strcmp(int_string, "q") != 0){                       //as long as user did not enter q, the function will be converting string to integer and stay in the loop
        int_number = atoi(int_string);                          //function atoi is used for coverting the numbers in the string argument to integer.
        printf("Converted number is %d\n", int_number);         //display the integer converted
        printf("Type the int numeric string (q - to quit):\n"); //prompt user for string to be converted to integer or quit the function if q is entered
        gets(int_string);
    }
    printf("*** End of Converting Strings to int Demo ***\n\n");

/* Version 2 */
printf("*** Start of Converting Strings to double Demo ***\n"); 
char double_string[80];
double double_number;
printf("Type the double numeric string (q - to quit):\n");      //prompt user for string to be converted to floating number or quit the function if q is entered
gets(double_string);
while(strcmp(double_string, "q") != 0){                         //as long as user did not enter q, the function will be converting string to floating number and stay in the loop
    double_number = atof(double_string);                        //function atof is used for coverting the numbers in the string argument to floating number.
    printf("Converted number is %f\n", double_number);          //display the floating number converted
    printf("Type the double numeric string (q - to quit):\n");  //prompt user for string to be converted to floating number or quit the function if q is entered
    gets(double_string);
}
printf("*** End of Converting Strings to double Demo ***\n\n");

/* Version 3 */
//>> insert here


}
