/******************************************************************************
** Program Name: FredAndDaphne.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the class
	FredAndDaphne, which represent the user choosing to play as this duo.
******************************************************************************/

#include "Character.hpp"

#ifndef FREDANDDAPHNE_HPP
#define FREDANDDAPHNE_HPP

class FredAndDaphne : public Character
{
public:
	FredAndDaphne(); //default constructor for Fred and Daphne
	~FredAndDaphne(); //destructor for Fred and Daphne
};

#endif