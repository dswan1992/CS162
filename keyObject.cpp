/******************************************************************************
** Program Name: keyObject.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions
	for the KeyObject class.
******************************************************************************/

#include "keyObject.hpp"

/******************************************************************************
** Function Name: KeyObject::KeyObject()
** Description: The default constructor for the KeyObject class, sets weight
	value to 0 and name to no name.
******************************************************************************/
KeyObject::KeyObject()
{
	name = "no name";
	weight = 0;

}


/******************************************************************************
** Function Name: KeyObject::KeyObject(string item, int objectWeight)
** Description: This is the constructor for an object of the KeyObject class,
	this constructor sets the name of the object to the item parameter and the
	weight to the objectWeight parameter
******************************************************************************/
KeyObject::KeyObject(string item, int objectWeight)
{
	name = item;
	weight = objectWeight;
	type = "key";
}


/******************************************************************************
** Function Name: int KeyObject::getValue()
** Description: Due to time cut this only returns zero, the original plan
	was to have an accumulator system similar to the clues system
******************************************************************************/
int KeyObject::getValue()
{
	return 0;
}

/******************************************************************************
** Function Name: KeyObject::~KeyObject()
** Description: The destructor for the KeyObject class
******************************************************************************/
KeyObject::~KeyObject()
{}