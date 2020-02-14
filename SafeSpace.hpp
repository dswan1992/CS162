/******************************************************************************
** Program Name: SafeSpace.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the SafeSpace
	class, which are spaces where the villian can't enter and the character
	doesn't lose bravery for entering that room
******************************************************************************/
#include "Object.hpp"
#include "Space.hpp"

#ifndef SAFESPACE_HPP
#define SAFESPACE_HPP

class SafeSpace : public Space
{
public:
	SafeSpace(); //default constructor
	SafeSpace(int roomVal); //constructor
	Object* getRoomObject(); //pure virtual getRoomObject function
	~SafeSpace(); //destructor
};

#endif