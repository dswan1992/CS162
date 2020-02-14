/******************************************************************************
** Program Name: FinalHelperFunctions.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the function definitions for the helper 
	functions for the Scooby-Doo game
******************************************************************************/

#include "FinalHelperFunctions.hpp"
#include "KeySpace.hpp"
#include "inputValidation.hpp"
#include <iostream>
using std::endl;
using std::cout;

/******************************************************************************
** Function Name: void printFile(ifstream& file, string filename)
** Description: This function prints out the lines of a text file to the 
	console by taking a input filestream object and the name of the file to 
	be read. The filename is added to the strings "txtFiles/" and ".txt" so 
	that the ifstream object will pull from the txtFiles directory
******************************************************************************/
void printFile(ifstream& file, string fileName)
{
	file.open("txtFiles/" + fileName + ".txt"); 
	if (!file) //if file doesn't open
	{
		cout << "File didn't open!" << endl;
	}
	else
	{
		string line; //each individual line
		string fileLine; //for the whole file
		while (getline(file, line))
		{
			fileLine += line; //adds line to the whole file string
			fileLine.push_back('\n'); //adds a newline character at the end of line
		}
		cout << fileLine;
	}
	file.close();
}

/******************************************************************************
** Function Name: void runRoomEvent(Space* currentRoom, int roomVal, Character* playerCharacter)
** Description: This room takes three parameters, a Space pointer to the room 
	the character is in, the value assigned to that room, and a Character 
	pointer to the player. Based off of these parameters, this function uses
	a switch/case method to print out the events of each room and how they
	impact the player
******************************************************************************/
void runRoomEvent(Space* currentRoom, int roomVal, Character* playerCharacter)
{
	ifstream roomEventFile;
	int playerChoice = 0;
	switch (roomVal)
	{
	case 1: //for the space: FoyerPtOne
		printFile(roomEventFile, "FoyerPtOne");
		break;
	case 2: //for FoyerPtTwo
		printFile(roomEventFile, "FoyerPtTwo");
		break;
	case 3: //for Dining room
		printFile(roomEventFile, "DiningRoom");
		playerChoice = withinRange(1, 2);
		if (playerChoice == 1)
		{
			printFile(roomEventFile, "DiningTable");
			playerCharacter->loseBravery(10);
		}
		else
		{
			printFile(roomEventFile, "DiningPortrait");
			playerChoice = withinRange(1, 2);
			if (playerChoice == 1)
			{
				currentRoom = static_cast<ClueSpace*>(currentRoom);
				playerCharacter->addInventory(currentRoom->getRoomObject());
			}
		}
		break;
	case 4: //for the kitche
		printFile(roomEventFile, "Kitchen");
		playerChoice = withinRange(1, 2);
		if (playerChoice == 1)
		{
			playerCharacter->scoobySnax();
			cout << "gained 10 bravery!" << endl;
		}
		break;
	case 5: //for the study
		printFile(roomEventFile, "Study");
		playerCharacter->loseBravery(15);
		break;
	case 6: //for the second floor hall
		printFile(roomEventFile, "SecondFloorHall");
		break;
	case 7: //for the library
		printFile(roomEventFile, "Library");
		playerChoice = withinRange(1, 2);
		if (playerChoice == 1) //if user chooses to look at books first
		{
			printFile(roomEventFile, "LibraryBooks");
			cout << endl;
			printFile(roomEventFile, "LibraryDesk");
			playerChoice = withinRange(1, 2);
			if (playerChoice == 1)
			{
				currentRoom = static_cast<ClueSpace*>(currentRoom);
				playerCharacter->addInventory(currentRoom->getRoomObject());
			}
			
		}
		else //if user chooses to look at the desk first
		{
			printFile(roomEventFile, "LibraryBooks");
			cout << endl;
			printFile(roomEventFile, "LibraryDesk");
			playerChoice = withinRange(1, 2);
			if (playerChoice == 1)
			{
				currentRoom = static_cast<ClueSpace*>(currentRoom);
				playerCharacter->addInventory(currentRoom->getRoomObject());
			}
			printFile(roomEventFile, "LibraryBooks");
		}
		break;
	case 8: //for the bedroom
		printFile(roomEventFile, "Bedroom");
		playerCharacter->loseBravery(15);
		break;
	case 9: //for the master bedroom
		printFile(roomEventFile, "MasterBed");
		playerChoice = withinRange(1, 2);
		if (playerChoice == 1) //if user eats scooby snax
		{
			playerCharacter->scoobySnax();
		}
		break;
	case 10: //for the master bathroom
		printFile(roomEventFile, "MasterBath");
		playerCharacter->loseBravery(5);
		break;
	case 11: //for the secret room
		printFile(roomEventFile, "Secret");
		currentRoom = static_cast<KeySpace*>(currentRoom);
		playerCharacter->addInventory(currentRoom->getRoomObject());
		playerCharacter->setHasKey();
		break;
	}
}