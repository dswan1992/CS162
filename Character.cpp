/******************************************************************************
** Program Name: Character.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions for the 
	Character class, the parent class for the character types in the 
	Scooby-Doo game.
******************************************************************************/
#include "Character.hpp"
#include "inputValidation.hpp"
#include <iostream>
using std::cout;
using std::endl;

/******************************************************************************
** Function Name: Character::Character()
** Description: This is the default constructor for the character class, 
	this constructor sets all the member variables to zero.
******************************************************************************/
Character::Character()
{
	bravery = 0;
	//following cut for time
	luck = 0;
	perception = 0;
}

/******************************************************************************
** Function Name: int Character::getBravery()
** Description: Getter function for the Bravery of a character
******************************************************************************/
int Character::getBravery()
{
	return bravery;
}

/******************************************************************************
** Function Name: void Character::setBravery(int value)
** Description: This file contains the setter function for the Bravery of a 
	character.
******************************************************************************/
void Character::setBravery(int value)
{
	this->bravery = value;
}

/******************************************************************************
** Function Name: void Character::setHasKey()
** Description: Sets the bool member variable hasKey to true to simulate the
	player finding the Basemement Key
******************************************************************************/
void Character::setHasKey()
{
	hasKey = true;
}


/******************************************************************************
** Function Name: bool Character::getHasKey()
** Description: Getter method for the bool member variable hasKey
******************************************************************************/
bool Character::getHasKey()
{
	return this->hasKey;
}


/******************************************************************************
** Function Name: int Character::getCluePoints()
** Description: Iterates through the inventory of a character and for any 
	ClueObject, adds the clue value of that object to an accumulator variable.
	This variable is returned.
******************************************************************************/
int Character::getCluePoints()
{
	queue<Object*> copyQueue = inventory; //creates a copy of inventory
	int clueCount = 0;
	if (!copyQueue.empty())
	{
		while (!copyQueue.empty())
		{
			if (copyQueue.front()->getType() == "clue") //for each clue, add the clue value to accumulator
			{
				clueCount += copyQueue.front()->getValue();
			}
			copyQueue.pop(); //removes item from the copy of inventory
		}
	}
	return clueCount;
}


/******************************************************************************
** Function Name: void Character::loseBravery(int value)
** Description: This file causes the character to lose bravery typically from 
	a scare.
******************************************************************************/
void Character::loseBravery(int value)
{
	this->bravery -= value;
}


/******************************************************************************
** Function Name: void Character::scoobySnax()
** Description: This is the healing method for the characters when they 
	consume scooby snax
******************************************************************************/
void Character::scoobySnax()
{
	this->bravery += 10;
}

/******************************************************************************
** Function Name: string Character::getName()
** Description: This is a getter function that returns the name of the 
	character.
******************************************************************************/
void Character::getName()
{
	 cout << this->name << endl;
}


/******************************************************************************
** Function Name: void Character::setLocation(Space* room)
** Description: This is the setter function for the location of a character
******************************************************************************/
void Character::setLocation(Space* room)
{
	location = room;
}

/******************************************************************************
** Function Name: Space* Space::getLocation()
** Description: Getter function for the location of the character
******************************************************************************/
Space* Character::getLocation()
{
	return this->location;
}


/******************************************************************************
** Function Name: void moveCharacter(int moveVal)
** Description: Takes an integer value for the movement value and checks to 
	see if that is a valid move, if it is, the next room in that direction 
	is the new location, otherwise an error message is printed
******************************************************************************/
void Character::moveCharacter(int moveVal)
{
	int playerChoice = 0;
	//following creates variables to check the rooms in each direction (besides climbing and lowering)
	Space* nextUp = this->location->getDirection(1); 
	Space* nextRight = this->location->getDirection(2);
	Space* nextLeft = this->location->getDirection(4);
	Space* nextBottom = this->location->getDirection(3);
	switch (moveVal)
	{
	case 1: //when user chooses to print the map
		location->printRoom(this->location->getRoomValue());
		break;
	case 2: //when moving up
		if (nextUp == NULL || nextUp->getIsLocked() == 'l')
		{
			cout << "Can't move that way" << endl;
		}
		else
		{
			this->location = location->getDirection(1);
			this->bravery -= 1;
		}
		break;
	case 3: //when moving right
		if (nextRight == NULL || nextRight->getIsLocked() == 'l')
		{
			cout << "Can't move that way" << endl;
		}
		else
		{
			this->location = location->getDirection(2);
			this->bravery -= 1;
		}
		break;
	case 4: //when moving left
		if (nextLeft == NULL || nextLeft->getIsLocked() == 'l')
		{
			cout << "Can't move that way" << endl;
		}
		else
		{
			this->location = location->getDirection(4);
			this->bravery -= 1;
		}
		break;
	case 5: //when moving south or "bottom"
		if (nextBottom == NULL)
		{
			cout << "Can't move that way" << endl;
		}
		else if (nextBottom->getIsLocked() == 'l')
		{
			cout << "Which of the Following is NOT a Monty Python MOVIE:" << endl;
			cout << "1: Monty Python and the Holy Grail" << endl;
			cout << "2: Monty Python: The Meaning of Life" << endl;
			cout << "3: Monty Python: The Life of Brian" << endl;
			cout << "4: Monty Python's Flying Circus" << endl;
			playerChoice = withinRange(1, 4);
			while (playerChoice != 4)
			{
				cout << "Wrong, please try again." << endl;
				playerChoice = withinRange(1, 4);
			}
				nextBottom->setIsLocked();
				location = nextBottom;
			
		}
		else
		{
			this->location = location->getDirection(3);
			this->bravery -= 1;
		}
		break;
	case 6: //when climbing a floor
		if (location->getDirection(5) == NULL)
		{
			cout << "Can't move that way" << endl;
		}
		else
		{
			this->location = location->getDirection(5);
			this->bravery -= 1;
		}
		break;
	case 7: //when lowering down to the floor below
		if (location->getDirection(6) == NULL)
		{
			cout << "Can't move that way" << endl;
		}
		else
		{
			this->location = location->getDirection(6);
			this->bravery -= 1;
		}
	case 8: //when user chooses to print the inventory
		cout << "Inventory:" << endl;
		printInventory(inventory);
		break;
	}
}

/******************************************************************************
** Function Name: void Character::printInventory()
** Description: This function prints the inventory out for the character,
	if the inventory is empty, prints out a message saying so
******************************************************************************/
void Character::printInventory(queue<Object*> printedQueue)
{
	if (printedQueue.empty())
	{
		cout << "Inventory is empty!" << endl;
	}
	else
	{
		while (!printedQueue.empty())
		{
			cout << printedQueue.front()->getName() << endl;
			printedQueue.pop();
		}
		
	}
}

/******************************************************************************
** Function Name: void Character::addInventory(Object* roomObj)
** Description: This function takes a pointer to an Object object and pushes
	it onto the queue
******************************************************************************/
void Character::addInventory(Object* roomObj)
{
	if (inventory.size() < 5)
	{
		inventory.push(roomObj);
	}
	else
	{
		cout << "Inventory is full!" << endl;
	}
}

/******************************************************************************
** Function Name: virtual Character::~Character()
** Description: The pure virtual destructor for the Character class.
******************************************************************************/
Character::~Character()
{}