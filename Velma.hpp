/******************************************************************************
** Program Name: Velma.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the class declaration for the Velma class,
	a derived class from the Character parent class.
******************************************************************************/
#include "Character.hpp"

#ifndef VELMA_HPP
#define VELMA_HPP


class Velma : public Character
{
public:
	Velma(); //default constructor for Velma
	~Velma(); //destructor for Velma
};
#endif