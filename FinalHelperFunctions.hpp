/******************************************************************************
** Function Name: FinalHelperFunctions.hpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the function prototypes for the helper 
	functions for the final project
******************************************************************************/
#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include "FredAndDaphne.hpp"
#include "Velma.hpp"
#include "ShaggyAndScooby.hpp"
#include "ClueSpace.hpp"


#ifndef FINALHELPERFUNCTIONS_HPP
#define FINALHELPERFUNCTIONS_HPP

void printFile(ifstream& file, string fileName); //prints the contents of the file
void runRoomEvent(Space* currentRoom, int roomVal, Character* playerCharacter); //runs the event of the room
#endif