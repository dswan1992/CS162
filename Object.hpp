/******************************************************************************
** Program Name: Object.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the Object class.
	The Object class will be an abstract parent class for specific objects in 
	the game.
******************************************************************************/

#include <string>
using std::string;

#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object
{
protected:
	string type = "n/a";
	string name; //name of the object
	int weight; //how much the object weighs
public:
	Object(); //default constructor
	string getName(); //getter function for the name of an object
	virtual string getType(); //virtual function for getting the type of object
	virtual int getValue() = 0; //pure virtual function for getting value of object
	int getWeight(); //getter function for the weight of an object (cut)
	virtual ~Object() = 0; //pure virtual destructor
};

#endif 

