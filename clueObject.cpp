/******************************************************************************
** Program Name: clueObject.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions for the
	ClueObject class.
******************************************************************************/

#include "clueObject.hpp"

/******************************************************************************
** Function Name: ClueObject::ClueObject()
** Description: Default constructor for a ClueObject Object, sets all values
	to zero
******************************************************************************/
ClueObject::ClueObject()
{
	weight = 0;
	clueValue = 0;
	type = "clue";
}


/******************************************************************************
** Function Name: ClueObject::ClueObject(int objectWeight, int objectValue)
** Description: The constructor for a ClueObject object that sets the weight
	of the object to objectWeight, and the clueValue of the object to 
	objectValue.
******************************************************************************/
ClueObject::ClueObject(string item, int objectWeight, int objectValue)
{
	name = item;
	weight = objectWeight;
	clueValue = objectValue;
	type = "clue";
}


/******************************************************************************
** Function Name: int ClueObject::getValue()
** Description: This function is a getter function that returns the clueValue
	of a specific ClueObject.
******************************************************************************/
int ClueObject::getValue()
{
	return this->clueValue;
}


/******************************************************************************
** Function Name: string ClueObject::getType()
** Description: Getter method for the type of the object
******************************************************************************/
string ClueObject::getType()
{
	return this->type;
}


/******************************************************************************
** Function Name: ClueObject::~ClueObject()
** Description: Destructor for an object of the ClueObject class
******************************************************************************/
ClueObject::~ClueObject()
{}