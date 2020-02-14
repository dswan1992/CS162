/******************************************************************************
** Program Name: clueObject.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the clueObject
	class, a derived class of the Object class. 
******************************************************************************/

#include "Object.hpp"

#ifndef CLUEOBJECT_HPP
#define CLUEOBJECT_HPP

class ClueObject : public Object
{
private:
	int clueValue; //value of the clue
public:
	ClueObject(); //default constructor for object of ClueObject class
	ClueObject(string item, int objectWeight, int objectValue); //constructor
	int getValue(); //gets clue value of object
	string getType(); //gets the type of the object
	~ClueObject();
};

#endif
