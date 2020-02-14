/******************************************************************************
** Program Name: Space.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member functions for the Space 
	abstract class.
******************************************************************************/

#include "Space.hpp"
#include "Visuals.hpp"

#include "FinalHelperFunctions.hpp"
#include "inputValidation.hpp"
#include <fstream>
using std::ifstream;

/******************************************************************************
** Function Name: Space::Space()
** Description: This is the default constructor for a Space class object. 
	This sets all the pointers to NULL, the floor to zero, and the type to
	"nothing".
******************************************************************************/
Space::Space()
{
	floor = 0;
	type = "nothing";
	isLocked = 'u';

	climb = NULL;
	lower = NULL;
	up = NULL;
	right = NULL;
	bottom = NULL;
	left = NULL;
}


/******************************************************************************
** Function Name: int Space::getRoomValue()
** Getter Function for the Room value of the current location
******************************************************************************/
int Space::getRoomValue()
{
	return this->roomValue;
}

/******************************************************************************
** Function Name: void setSpace(string spaceType, Space* adjacentRoom)
** Description: This file takes two parameters, a string on the direction,
	and a pointer to a Space object for the room. These two parameters are 
	used to change the adjacent room in the desired direction to the parameter
	room.
******************************************************************************/
void Space::setSpace(Space* climbSpace, Space* lowerSpace, Space* upSpace, Space* rightSpace, Space* leftSpace, Space* bottomSpace)
{
	climb = climbSpace;
	lower = lowerSpace;
	up = upSpace;
	right = rightSpace;
	left = leftSpace;
	bottom = bottomSpace;
}


char Space::getIsLocked()
{
	return this->isLocked;
}


void Space::setIsLocked()
{
	this->isLocked = 'u';
}

bool Space::getRoomEvent()
{
	return this->roomEvent;
}

void Space::setRoomEvent()
{
	this->roomEvent = true;
}


/******************************************************************************
** Space* Space::getSpace(int direction)
** Description: This function returns a pointer to a Space object based off
	the value for the direction:
		1) gets the up pointer
		2) gets the right pointer
		3) gets the bottom pointer
		4) gets the left pointer
		5) gets the climb pointer
		6) gets the lower pointer
******************************************************************************/
Space* Space::getDirection(int direction)
{
	Space* spaceDesired = NULL;
	switch(direction)
	{
	case 1: //getting the up member
		spaceDesired = this->up;
		break;
	case 2: //getting right member
		spaceDesired = this->right;
		break;
	case 3: //getting bottom member
		spaceDesired = this->bottom;
		break;
	case 4:  //getting left member
		spaceDesired = this->left;
		break;
	case 5: //getting climb member
		spaceDesired = this->climb;
		break;
	case 6: //getting lower member
		spaceDesired = this->lower;
	}
	return spaceDesired;
}


/******************************************************************************
** Function Name: void Space::printRoom(int value)
** Description: This file contains the function to print out the player 
	location in the haunted house that will be used for navigation. This 
	function takes an integer parameter and prints the correct map based off
	of that integer value.
******************************************************************************/
void Space::printRoom(int value)
{
	switch (value) //prints the map for each room based off case number
	{ 
	case 1:
		floorOneFoyerOne();
		break;
	case 2:
		floorOneFoyerTwo();
		break;
	case 3:
		floorOneDining();
		break;
	case 4:
		floorOneKitchen();
		break;
	case 5:
		floorOneStudy();
		break;
	case 6:
		floorTwoLanding();
		break;
	case 7:
		floorTwoLibrary();
		break;
	case 8:
		floorTwoBedroom();
		break;
	case 9:
		floorTwoMasterBed();
		break;
	case 10:
		floorTwoMasterBath();
		break;
	case 11:
		floorTwoSecret();
		break;
	case 12:
		floorOneBasement();
		break;
	}
}

/******************************************************************************
** Function Name: virtual Space::~Space()
** Description: This function is the definition for the pure virtual 
	destructor for the Space class.
******************************************************************************/
Space::~Space()
{
}