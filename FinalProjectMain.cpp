/******************************************************************************
** Function Name: FinalProjectMain.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This is the main file for the Scooby-Doo Game
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;

#include "Menu.hpp"
#include "Visuals.hpp"
#include "FinalHelperFunctions.hpp"
#include "ShaggyAndScooby.hpp"
#include "Velma.hpp"
#include "FredAndDaphne.hpp"
#include "HauntedHouse.hpp"
#include "inputValidation.hpp"


int main()
{
	//For the main Title screen
	mainTitle();
	ifstream about; //creates input file stream object for About.txt
	printFile(about, "About");
	cout << "\n \n";

	//Main Game Menu 
	int start = startMenu();
	while (start == 1)
	{
		printFile(about, "Info");
		cout << endl;
		Character* player;
		//Character Menu for character choice
		player = characterSelect();
		player->getName();
		
		runHauntedHouse(player);

		delete player;
		
		cout << "Play again?" << endl;
		start = withinRange(1, 2);
	}
	cout << "Thanks for Playing!" << endl;


	return 0;
}