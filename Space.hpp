/******************************************************************************
** Program Name: Space.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the Space class,
	which represents spaces in the Scooby-Doo game. The Space class will have
	the member variables of:
		1) Floor: what floor the space occupies
		2) Type: can be:
			a) safe space: no bravery lost for entering 
			b) clue space: contains a clue inside to find
			c) key space: needs a key to enter
			d) villian space: this room contains the villian to catch
		3) Directional Pointers:
			a) climb: moving up to the next floor
			b) lower: moving down to the floor below
			c) up: moving "up" on the map or North
			d) right: moving "right" or to the East
			e) left: moving "left" or to the West
			f) down: moving "down" or to the South
******************************************************************************/
#include <string>
using std::string;

#include "Object.hpp"

#ifndef SPACE_HPP
#define SPACE_HPP

class Space
{
protected:
	int floor; //what floor the space is on
	int roomValue = 0; //assigned room value for printing the map
	string type; //what type of room the space is
	bool roomEvent = false;
	char isLocked; //character variable for if a room is locked
	//pointer member variables
	Space* climb;
	Space* lower;
	Space* up;
	Space* right;
	Space* left;
	Space* bottom;

	//boolean variables for stuff in the space (these were cut)
	bool hasClue = false;
	bool minorScare = false;
	bool majorScare = false;
	bool villianScare = false;
public:
	Space(); //default constructor
	int getRoomValue(); //getter function for the value assigned to a room
	char getIsLocked(); //getter function for if a door is locked
	void setIsLocked(); //setter function for a door being unlocked
	bool getRoomEvent(); //getter function to see if room event has been done already
	void setRoomEvent(); //setter function to set the room event to complete
	virtual Object* getRoomObject() = 0; //pure virtual function for getting a room object
	Space* getDirection(int direction); //get a direction based off an integer value
	void setSpace(Space* climbSpace, Space* lowerSpace, Space* upSpace, Space* rightSpace, Space* leftSpace, Space* bottomSpace); //setter for pointer members
	void printRoom(int value); //prints value based on location of room
	virtual ~Space() = 0; //pure virtual destructor
};

#endif