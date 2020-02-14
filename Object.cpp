/******************************************************************************
** Program Name: Object.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the member function definitions for the 
	Object class.
******************************************************************************/

#include "Object.hpp"

/******************************************************************************
** Function Name: Object::Object()
** Description: This function is the default constructor for an object of the
	Object class.
******************************************************************************/
Object::Object()
{
	weight = 0;
}


/******************************************************************************
** Function Name: string Object::getName()
** Description: Getter function for the name of an object
******************************************************************************/
string Object::getName()
{
	return this->name;
}


/******************************************************************************
** Function Name: string Object::getType()
** Description: This is a getter function for the type of the item
******************************************************************************/
string Object::getType()
{
	return this->type;
}


/******************************************************************************
** Function Name: int Object::getWeight()
** Description: This is a getter method for the weight of an object
******************************************************************************/
int Object::getWeight()
{
	return this->weight;
}


/******************************************************************************
** Function Name: virtual Object::~Object()
** Description: This is the definition for the pure virtual destructor for the
	Object abstract class.
******************************************************************************/
Object::~Object()
{}