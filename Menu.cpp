/******************************************************************************
** Program Name: Menu.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the function definitions for the menus
	in the Scooby-Doo game.
******************************************************************************/

#include "inputValidation.hpp"
#include "FinalHelperFunctions.hpp"
#include "Menu.hpp"
#include "FredAndDaphne.hpp"
#include "Velma.hpp"
#include "ShaggyAndScooby.hpp"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
** Function Name: int startMenu()
** Description: This function outputs a starting menu for the Scooby-Doo game,
	giving the user three choices:
		1) Start Game
		2) Quit
	This choice is then returned to the main function as the user's choice
******************************************************************************/
int startMenu()
{
	cout << "1) Start Game" << endl;
	cout << "2) Quit" << endl;
	int userChoice = withinRange(1, 2);
}


/******************************************************************************
** Function Name: Character* characterSelect()
** Description: This menu prints out the three character choices, once the 
	user selects a character, the character information is printed up, then 
	the menu asks the user if they would like to select that character,
	if the user doesn't want that character, the menu goes back to the start
	menu
******************************************************************************/
Character* characterSelect()
{
	Character* userCharacter = NULL;
	ifstream characterBio;
	char chooseCharacter;
	//prompts user to select a character 
	cout << "Please choose your character:" << endl;
	cout << "1) Fred and Daphne" << endl;
	cout << "2) Velma" << endl;
	cout << "3) Shaggy and Scooby" << endl;

	int characterChoice = withinRange(1, 3); 
	if (characterChoice == 1)
	{
		printFile(characterBio, "FredAndDaphne");
		cout << "Choose this character?" << endl;
		chooseCharacter = yesOrNo();
		if (chooseCharacter == 'y')
		{
			userCharacter = static_cast<FredAndDaphne*>(userCharacter);
			userCharacter = new FredAndDaphne;
		}
		else
		{
			userCharacter = characterSelect();
		}
	}
	else if (characterChoice == 2)
	{
		printFile(characterBio, "Velma");
		cout << "Choose this character?" << endl;
		chooseCharacter = yesOrNo();
		if (chooseCharacter == 'y')
		{
			userCharacter = static_cast<Velma*>(userCharacter);
			userCharacter = new Velma;
		}
		else
		{
			userCharacter = characterSelect();
		}
	}
	else
	{
		printFile(characterBio, "ShaggyAndScooby");
		cout << "Choose this character?" << endl;
		chooseCharacter = yesOrNo();
		if (chooseCharacter == 'y')
		{
			userCharacter = static_cast<ShaggyAndScooby*>(userCharacter);
			userCharacter = new ShaggyAndScooby;
		}
		else 
		{
			userCharacter = characterSelect();
		}
	}

	return userCharacter;
}