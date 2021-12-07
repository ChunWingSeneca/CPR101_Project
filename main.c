/*
* Name:         Chun Wing Mak
* Email:        cwmak5@myseneca.ca
* ID:           126998210
* Date written: 7/12
* Course:       CPR101
* Session:      ZEE
* Project:      CPR101 Final Project
* 
* main.c: CPR101_Project
* 
* Purpose: main file of project.
* 
*/

#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

/*
* Purpose: main function, will call all 4 modules
* Returns: int, for status, 0 for success, 1 for error
*/
int main() {
	fundamentals(); // call module 1 fundamentals
	manipulating(); // call module 2 manipulating
	converting(); // call module 3 converting
	tokenizing(); // call module 4 tokenizing
	return 0;
}