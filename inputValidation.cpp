/********************************************************************
** Program Name: inputValidation.cpp
** Author: Devin Swanson
** Date: 11/03/2019
** Description: This file contains the functions for input validation
	to be used for current and future projects. This file will 
	contain more functions as more tests are needed for input 
	validation.
********************************************************************/


#include "inputValidation.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;




/********************************************************************
** Function Name: int makeInteger()
** Description: This function prompts the user for an integer and
	verifies that the input was a single integer. The function 
	accomplishes this with a while loop. The while loop checks for
	two conditions, cin.fail() returns true when an input failure
	occurs and input buffer is kept in an error state. The second
	condition, cin.peek() looks at the next character in the stream.
	Using these two methods, the while loop runs when input 
	failure occurs or while the next character is an endline 
	character. When either of these conditions are true, the 
	function clears the stream, ignores the next 100 characters 
	until an endline character is hit, and then reprompts user for
	a valid input. Once a valid input is put in, the function 
	returns that integer.
********************************************************************/


// Inspiration from: 
//cin.fail() = https://www.hackerearth.com/practice/notes/validating-user-input-in-c/
//cin.peek() = ch. 13.3 from textbook
//code inspiration: https://stackoverflow.com/questions/41020417/cin-peek-for-input-validation
int makeInteger()
{
	int userInput = 0;
	
	cin >> userInput;

	//while input failure occurs or the next character isn't an inline character
	while (cin.fail() || cin.peek() != '\n')
	{
		//clears input stream
		cin.clear();
		cin.ignore(100, '\n');

		//re-prompts for input
		cout << "Please enter a valid integer: " << endl;
		cin >> userInput;
	}

	return userInput;

}

/********************************************************************
**Function Name: int withinRange(int valOne, int valTwo)
**Description: This function uses the makeInteger() function to
	create a valid integer. If the input is outside the range, 
	the function prompts the user to enter an integer within 
	that range, when the user enters an integer within the range, 
	the integer is returned.
********************************************************************/
int withinRange(int lowerVal, int upperVal)
{
	
	int goodRange = makeInteger();
	
	while (goodRange < lowerVal || goodRange > upperVal)
	{
		cout << "Please enter a number between " << lowerVal;
		cout << " and " << upperVal << ": ";
		
		goodRange = makeInteger();
	}
	//if user enters a good number, returns value
	return goodRange;
}


/********************************************************************
** Function Name: char yesOrNo()
** Description: This function prompts the user to enter either 'y'
	for yes or 'n' for no, if the user enters any other character
********************************************************************/
char yesOrNo()
{
	string choice;
	char choiceCharacter = '0';
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please enter 'y' for yes or 'n' for no" << endl;
	getline(cin, choice);
	while (choice.size() != 1) //while more than one character was entered
	{
		cout << "Please only enter y or n, no spaces" << endl;
		getline(cin, choice);
	}
	choiceCharacter = choice[0];
	while (choice[0] != 'y' && choice[0] != 'n') //if the first character entered is anything other than y or n
	{
		cout << "Please enter 'y' for yes or 'n' for no" << endl;
		getline(cin,choice);
		choiceCharacter = choice[0];
	}
	return choiceCharacter;
}


/********************************************************************
**Function Name: int greaterThanOrEqual(int input, int properVal)
**Description: This function takes two parameters: the input from 
	the user, and a minimum value. If the input is less than the 
	minimum value, uses makeInteger() to get a new integer.
********************************************************************/

int greaterThanOrEqual(int input, int properVal)
{
	int goodNum = input;
	while (goodNum < properVal)
	{
		cout << "Please enter a number greater than or equal to " << properVal;
		cout << endl;
		goodNum = makeInteger();
	}

	return goodNum;
}

