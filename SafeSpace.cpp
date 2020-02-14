/******************************************************************************
** Program Name: SafeSpace.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions for the 
	SafeSpace class. 
******************************************************************************/
#include "SafeSpace.hpp"



/******************************************************************************
** Function Name: SafeSpace::SafeSpace()
** Description: This is the default constructor for an object of the 
	SafeSpace class. This constructor just sets the type to "Safe". 
******************************************************************************/
SafeSpace::SafeSpace()
{
	type = "Safe";
}


/******************************************************************************
** Function Name: SafeSpace::SafeSpace(int floorLevel)
** Description: This function is a constructor for a SafeSpace object, it 
	takes one parameter, the level the floor is on, and sets the floor member
	variable to that parameter and sets the type to "Safe".
******************************************************************************/
SafeSpace::SafeSpace(int roomVal)
{
	roomValue = roomVal;
	type = "Safe";
}

/******************************************************************************
** Function Name: Object* SafeSpace::getRoomObject()
** Description: Pure virtual function for the space class, no room objects in
	SafeSpace class
******************************************************************************/
Object* SafeSpace::getRoomObject()
{}

/******************************************************************************
** SafeSpace::~SafeSpace()
** Description: This function is the definition for the destructor of the
	SafeSpace object.
******************************************************************************/
SafeSpace::~SafeSpace()
{
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