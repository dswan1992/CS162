/******************************************************************************
** Program Name: FloorOne.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the first floor of the haunted house, this
	file creates a Queue of pointers to space objects and will link all the
	rooms together.
******************************************************************************/

#include "HauntedHouse.hpp"
#include "FinalHelperFunctions.hpp"
#include "inputValidation.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <fstream>
using std::ifstream;


/******************************************************************************
** Function Name: void runHauntedHouse(Character* playerCharacter)
** Description: This function builds and simulates the Scooby-Doo game. First
	it creates the haunted house, by creating the spaces and the objects 
	in those spaces. Then it runs the game through the while loop, when the
	game is over either a victory or loss message is output to the user.
******************************************************************************/
void runHauntedHouse(Character* playerCharacter)
{
	//Following code builds the haunted house

	
	//Pointers to the spaces in floor one
	Space* foyerPtOne = static_cast<SafeSpace*>(foyerPtOne);
	foyerPtOne = new SafeSpace(1);
	Space* foyerPtTwo = static_cast<SafeSpace*>(foyerPtTwo);
	foyerPtTwo = new SafeSpace(2);
	Space* study = static_cast<ClueSpace*>(study);
	study = new ClueSpace(5, "book of ship wrecks", 1, 2);
	Space* basement = static_cast<KeySpace*>(basement);
	basement = new KeySpace(12, "endgame", 0);
	Space* kitchen = static_cast<ClueSpace*>(kitchen);
	kitchen = new ClueSpace(4, "Packed pantry", 0, 1);
	Space* diningRoom = static_cast<ClueSpace*>(diningRoom);
	diningRoom = new ClueSpace(3, "area map", 1, 1);

	//Pointers to the spaces in floor two
	Space* secondFloorHall = static_cast<SafeSpace*>(secondFloorHall);
	secondFloorHall = new SafeSpace(6);
	Space* bedroom = static_cast<ClueSpace*>(bedroom);
	bedroom = new ClueSpace(8, "costume", 5, 5);
	Space* secret = static_cast<KeySpace*>(secret);
	secret = new KeySpace(11, "Basement Key", 1);
	Space* masterBed = static_cast<ClueSpace*>(masterBed);
	masterBed = new ClueSpace(9, "diary", 1, 7);
	Space* masterBath = static_cast<ClueSpace*>(masterBath);
	masterBath = new ClueSpace(10, "makeup", 1, 8);
	Space* library = static_cast<ClueSpace*>(library);
	library = new ClueSpace(7, "charter", 1, 6);

	//links the foyer part 1 to adjoining rooms
	//setting the room order: climb, lower, up, right, left, bottom
	foyerPtOne->setSpace(NULL, NULL, foyerPtTwo, diningRoom, basement, NULL);
	//links dining room to adjoining rooms
	diningRoom->setSpace(NULL, NULL, kitchen, NULL, foyerPtOne, NULL);
	//links kitchen to adjoining rooms
	kitchen->setSpace(NULL, NULL, NULL, NULL, foyerPtTwo, diningRoom);
	//links study to foyer part 2
	study->setSpace(NULL, NULL, NULL, foyerPtTwo, NULL, NULL);
	//links foyer part 2 to adjoining rooms
	foyerPtTwo->setSpace(secondFloorHall, NULL, NULL, kitchen, study, foyerPtOne);

	//Linking second floor of the house
	secondFloorHall->setSpace(NULL, foyerPtTwo, NULL, bedroom, library, masterBed);
	bedroom->setSpace(NULL, NULL, NULL, NULL, secondFloorHall, secret);
	secret->setSpace(NULL, NULL, bedroom, NULL, NULL, NULL);
	masterBed->setSpace(NULL, NULL, secondFloorHall, NULL, masterBath, NULL);
	masterBath->setSpace(NULL, NULL, NULL, masterBed, NULL, NULL);
	library->setSpace(NULL, NULL, NULL, secondFloorHall, NULL, NULL);

	ifstream fileRead;
	playerCharacter->setLocation(foyerPtOne);
	int gameChoice = 0;
	while (playerCharacter->getBravery() > 0 && (playerCharacter->getCluePoints() < 3 || playerCharacter->getHasKey() == false)) //while game is going
	{
		if (playerCharacter->getBravery() < 0) //sets the bravery to 0 if below 0
		{
			playerCharacter->setBravery(0);
		}
		if (playerCharacter->getLocation()->getRoomEvent() == false) //if the room event hasn't happened yet
		{
			runRoomEvent(playerCharacter->getLocation(), playerCharacter->getLocation()->getRoomValue(), playerCharacter);
			playerCharacter->getLocation()->setRoomEvent();
		}
		cout << "--------------------------------------------------------" << endl;
		cout << "Bravery Left: " << playerCharacter->getBravery() << endl;
		cout << "Clue Points: " << playerCharacter->getCluePoints() << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << "What would you like to do?" << endl;
		cout << "1: print map" << "     2: move up" << "     3: move right" << endl;
		cout << "4: move left" << "     5: move down" << "   6: climb" << endl;
		cout << "7: lower" << "     8: print inventory" << endl;
		cout << "--------------------------------------------------------" << endl;
		gameChoice = withinRange(1, 8);
		playerCharacter->moveCharacter(gameChoice);
		cout << "----------------------------------------------------------" << endl;
		if (playerCharacter->getBravery() < 0) //sets the bravery to 0 if below 0
		{
			playerCharacter->setBravery(0);
		}
	}
	if (playerCharacter->getBravery() <= 0)
	{
		cout << "Sorry, you Lost!" << endl;
	}
	else //when player wins
	{
		printFile(fileRead, "Victory");
	}

	//deletes the rooms in the house
	delete secondFloorHall;
	delete bedroom;
	delete secret;
	delete masterBed;
	delete masterBath;
	delete library;
	delete foyerPtOne;
	delete foyerPtTwo;
	delete study;
	delete basement;
	delete kitchen;
	delete diningRoom;
}