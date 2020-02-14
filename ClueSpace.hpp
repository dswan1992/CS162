/******************************************************************************
** Program Name: ClueSpace.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the ClueSpace
	class, which are the spaces that contain clues. These spaces also 
	run the chance of producing a minor scare to the character, which
	lowers their bravery by 5 (this changed for time)
******************************************************************************/
#include "Space.hpp"
#include "clueObject.hpp"

#ifndef CLUESPACE_HPP
#define CLUESPACE_HPP

class ClueSpace : public Space
{
private:
	ClueObject* roomClue; //pointer to room clue
public:
	ClueSpace(); //default constructor for a ClueSpace object
	ClueSpace(int roomVal, string item, int objectWeight, int objectValue); //constructor that initializes roomClue too
	Object* getRoomObject(); //getter function for roomClue
	~ClueSpace(); //destructor
};

#endif