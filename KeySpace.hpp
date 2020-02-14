/******************************************************************************
** Program Name: KeySpace.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the KeySpace 
	class, a derived class of the space class. This class has a private 
	member bool variable for whether the door is locked, if the door is locked
	the player cannot enter the room.
******************************************************************************/

#include "Space.hpp"
#include "keyObject.hpp"

#ifndef KEYSPACE_HPP
#define KEYSPACE_HPP

class KeySpace : public Space
{	
private:
	KeyObject* roomObject = NULL;

public:
	KeySpace(); //default constructor
	KeySpace(int roomVal, string keyObjName, int objectWeight); //constructor
	Object* getRoomObject(); //getter function for the KeyObject
	~KeySpace(); //destructor
	
};

#endif