/********************************************************************
** Program Name: inputValidation.hpp
** Author: Devin Swanson
** Date: 11/03/2019
** Description: This file contains the function prototypes for input
	validation to be used for future projects. The number of 
	functions present in this file will increase as more tests for
	input validation are created.
********************************************************************/
#ifndef INPUTVALIDATION_HPP
#define INPUTVALIDATION_HPP


//input validation to give a good integer

int makeInteger();

//input validation to check if input is within accepted range

int withinRange(int lowerVal, int upperVal);

char yesOrNo(); //returns either 'y' for yes or 'n' for no

//input validation to check for a singular number

int greaterThanOrEqual(int userInput, int properVal);



#endif  

