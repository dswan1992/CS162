/******************************************************************************
** Program Name: ClueSpace.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions for the
	ClueSpace class
******************************************************************************/

#include "ClueSpace.hpp"

/******************************************************************************
** Function Name: ClueSpace::ClueSpace()
** Description: Default constructor for ClueSpace class
******************************************************************************/
ClueSpace::ClueSpace()
{
	roomClue = NULL;
}


/******************************************************************************
** Function Name: ClueSpace::ClueSpace(string item, int objectWeight, int objectValue)
** Description: Constructor for an object of the ClueSpace class, creates 
	a ClueObject initialized from the parameter values.
******************************************************************************/
ClueSpace::ClueSpace(int roomVal, string item, int objectWeight, int objectValue)
{
	roomValue = roomVal;
	roomClue = new ClueObject(item, objectWeight, objectValue);
}


/******************************************************************************
** Function Name: Object* ClueSpace::getRoomObject()
** Description: Gets the clueObject from the room
******************************************************************************/
Object* ClueSpace::getRoomObject()
{
	return this->roomClue;
}

/******************************************************************************
** Function Name: ClueSpace::~ClueSpace()
** Description: The destructor for the ClueSpace Class
******************************************************************************/
ClueSpace::~ClueSpace()
{
	delete roomClue;
	up = NULL;
	right = NULL;
	bottom = NULL;
	left = NULL;
	climb = NULL;
	lower = NULL;
	delete up;
	delete right;
	delete bottom;
	delete left;
	delete climb;
	delete lower;
}