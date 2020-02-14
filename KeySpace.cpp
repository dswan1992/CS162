/******************************************************************************
** Program Name: KeySpace.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class member function definitions for 
	the KeySpace class
******************************************************************************/

#include "KeySpace.hpp"

/******************************************************************************
** Function Name: KeySpace::KeySpace()
** Description: Default constructor for the KeySpace class
******************************************************************************/
KeySpace::KeySpace()
{
	this->isLocked = 'l';
}

/******************************************************************************
** Function Name: KeySpace::KeySpace(int roomVal)
** Description: This is the constructor for the KeySpace class, assigning a 
	room value to the object
******************************************************************************/
KeySpace::KeySpace(int roomVal, string keyObjectName, int objectWeight)
{
	roomValue = roomVal;
	this->isLocked = 'l';
	roomObject = new KeyObject(keyObjectName, objectWeight);
}

/******************************************************************************
** Function Name: Object* KeySpace::getRoomObject()
** Description: Overridden function of the pure virtual getRoomObject() of the
	base Space class. Returns the key object 
******************************************************************************/
Object* KeySpace::getRoomObject()
{
	return this->roomObject;
}


/******************************************************************************
** Function Name: KeySpace::~KeySpace()
** Description: This is the destructor for the KeySpace class
******************************************************************************/
KeySpace::~KeySpace()
{
	up = NULL;
	right = NULL;
	bottom = NULL;
	left = NULL;
	climb = NULL;
	lower = NULL;
	delete roomObject;
	delete up;
	delete right;
	delete bottom;
	delete left;
	delete climb;
	delete lower;
}