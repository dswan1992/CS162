/******************************************************************************
** Program Name: keyObject.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the KeyObject 
	class, a derived class of the Object class
******************************************************************************/

#include "Object.hpp"

#ifndef KEYOBJECT_HPP
#define KEYOBJECT_HPP

class KeyObject : public Object
{
public:
	KeyObject(); //default constructor
	KeyObject(string item, int objectWeight); //constructor for an object
	int getValue(); //get the value of the object
	~KeyObject(); //destructor
};

#endif