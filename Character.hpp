/******************************************************************************
** Program Name: Character.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the Character
	class, a parent class for the Scooby-Doo game. This class will contain 
	member variables for:
		1) Bravery: This acts as the health meter for the characters, they 
			will lose bravery as they explore the haunted house, get chased
			by the ghost, and encounter randomized "scares" throughout. 
			Bravery can be earned back by finding and eating Scooby Snacks.
		2) Luck: This member variable will be skill checked throughout the 
			game. If their luck is high enough, a character can narrowly miss
			scares, and if the luck skill is high enough, can even miss 
			getting chased back to the beginning by the ghost. Luck can even 
			be used to stumble upon clues if the Perception skill isn't 
			high enough
		3) Perception: This skill is used for finding clues and hidden 
			passageways throughout the haunted house, 
******************************************************************************/
#include "Space.hpp"
#include "keyObject.hpp"
#include "clueObject.hpp"

#include <string>
using std::string;

#include <queue>
using std::queue;

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
protected:
	int bravery; //health of the character
	int luck; //cut for time
	int perception; //cut for time
	queue<Object*> inventory; //character's inventory
	int cluePoints = 0; //how many clues the character has
	bool hasKey = false; //if the character has a key
	Space* location = NULL; //current location of the character
	string name = "no name"; //Name of the character
public:
	Character(); //default constructor for Character
	int getBravery(); //gets the bravery score for the character
	void setBravery(int value); //setter for bravery member variable
	void setHasKey(); //setter for hasKey member variable
	bool getHasKey(); //getter for hasKey member variable
	int getCluePoints(); //getter for total clue points
	void loseBravery(int value); //for losing health when scared
	void scoobySnax(); //gaining health by consuming scooby snax
	void getName(); //getter function for the name
	void setLocation(Space* room); //setter function for current location
	Space* getLocation(); //getter function for current location
	void moveCharacter(int moveVal); //function that moves a character to a different room
	void printInventory(queue<Object*> printedQueue); //shows contents of the inventory
	void addInventory(Object* roomObj); //adds object to player inventory
	virtual ~Character() = 0; //virtual class destructor
};

#endif