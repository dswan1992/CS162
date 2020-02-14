/******************************************************************************
** Program Name: Visuals.cpp
** Author: Devin Swanson
** Date: 12/10/2019
** Description: This file contains the visuals that will be used for the 
	Scooby-Doo game.
******************************************************************************/

#include "Visuals.hpp"
#include <iostream>
using std::cout;
using std::endl;

/******************************************************************************
** Function Name: void mainTitle()
** Description: This function prints out the main title for the game
******************************************************************************/
void mainTitle()
{
	cout << endl;
	cout << "                           ||                                    " << endl;
	cout << "                          (  )                                   " << endl;
	cout << "    _   _                 /  \\                 ||                " << endl;
	cout << "   | | | |               /    \\               /  \\               " << endl;
	cout << "  _|_|_|_|_             /      \\             /    \\              " << endl;
	cout << " |_________|           /        \\           |      |             " << endl;
	cout << "  |       |           /          \\          |      |             " << endl;
	cout << "  |       |          /            \\        /        \\            " << endl;
	cout << "  |       |         /              \\      /__________\\           " << endl;
	cout << "  |       |         \\______________/       |        |            " << endl;
	cout << "  |       |          |            |        |        |            " << endl;
	cout << "  |       |          |            |        |        |            " << endl;
	cout << " _|       |__________|            |________|        |__________  " << endl;
	cout << "| |       |          |            |        |        |          | " << endl;
	cout << "| |_______|          |            |        |        |          | " << endl;
	cout << "|                    |            |        |        |          | " << endl;
	cout << "|                    \\____________/        \\________/          | " << endl;
	cout << "|                                                              | " << endl;
	cout << "|______________________________________________________________| " << endl;
	cout << " |                                                            |  " << endl;
	cout << " |                                                            |  " << endl;
	cout << " |    ____       ______________________       ____    ____    |  " << endl;
	cout << " |   |    |     |          |           |     |    |  |    |   |  " << endl;
	cout << " |   |____|     |          |           |     |____|  |____|   |  " << endl;
	cout << " |   |    |     |          |           |     |    |  |    |   |  " << endl;
	cout << " |   |____|     |__________|___________|     |____|  |____|   |  " << endl;
	cout << " |              |          |           |                      |  " << endl;
	cout << " |              |          |           |                      |  " << endl;
	cout << " |              |__________|___________|                      |  " << endl;
	cout << " |            ________________________________                |  " << endl;
	cout << " |           /________________________________\\               |  " << endl;
	cout << " |            |  |                        |  |                |  " << endl;
	cout << " |            |  |       _________        |  |                |  " << endl;
	cout << " |            |  |      |         |       |  |                |  " << endl;
	cout << " |            |  |      |         |       |  |                |  " << endl;
	cout << " |            |  |      |         |       |  |                |  " << endl;
	cout << " |            |  |      |       ()|       |  |                |  " << endl;
	cout << " |            |  |      |         |       |  |                |  " << endl;
	cout << " |            |  |      |         |       |  |                |  " << endl;
	cout << " |____________|  |_____ |_________| ______|  |________________|  " << endl;
	cout << "              |__|      /        /        |__|                   " << endl;
	cout << endl;
}


/******************************************************************************
** Function Name: void floorOneMap()
** Description: This function is the template for the first floor of the 
	haunted house, this function will be used to create the various first 
	floor maps for each of the three characters.
******************************************************************************/
void floorOneMap()
{
	cout <<  "______________________________________________________________________"  << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;

}


/******************************************************************************
** Function Name: void floorOneFoyerOne()
** Description: This is the printable map for when the character is in the 
	starting location aka Foyer Pt. 1
******************************************************************************/
void floorOneFoyerOne()
{

	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1  (*)   O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}

/******************************************************************************
** Function Name: void floorOneFoyerTwo()
** Description: This function prints out the map for the first floor when the
	user is in the space: Foyer Pt 2.
******************************************************************************/
void floorOneFoyerTwo()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |               (*)   |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}

/******************************************************************************
** Function Name: void floorOneDining()
** Description: Printable map for when the player is in the Dining Room
******************************************************************************/
void floorOneDining()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |             (*)         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}

/******************************************************************************
** Function Name: void floorOneKitchen()
** Description: Printable map for the first floor when the character is in the
	kitchen.
******************************************************************************/
void floorOneKitchen()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                 (*)     |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorOneStudy()
** Description: This function prints out the floor one map when the character
	is in the Study.
******************************************************************************/
void floorOneStudy()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|   (*)                |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


void floorOneBasement()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |  | | | | stairs up| |                         |" << endl;
	cout << "|                      |  |_|_|_|_|_|_|_|__|_|                         |" << endl;
	cout << "|         Study        |                     |       Kitchen           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|______________________|        Foyer        |_________O_______________|" << endl;
	cout << "|                      |        Pt 2         |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|        Basement      |                     |         Dining Room     |" << endl;
	cout << "|                      |_________OO__________|                         |" << endl;
	cout << "|        (*)           |                     |                         |" << endl;
	cout << "|                      X   Foyer Pt 1        O                         |" << endl;
	cout << "|______________________|_____________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoMap()
** Description: This function is the standard template for the second floor
	map of the Haunted House
******************************************************************************/
void floorTwoMap()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |         |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoLanding()
** Description: Map showing character location when they enter the top floor
******************************************************************************/
void floorTwoLanding()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|         Library      |      (*)            |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |         |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoLibrary()
** Description: This function prints the map of the 2nd floor showing the 
	player location in the library
******************************************************************************/
void floorTwoLibrary()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "| (*)                  |                     |                         |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |         |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoBedroom
** Description: This function prints the map when the player is in the 
	bedroom
******************************************************************************/
void floorTwoBedroom()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |         (*)             |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |         |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoSecret()
** Description: This function reveals the name of the secret room upstairs 
	when the player enters it
******************************************************************************/
void floorTwoSecret()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         Survey Room     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|             (*)         |" << endl;
	cout << "|       |         |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoMasterBed()
** Description: map for when player is in the master bedroom
******************************************************************************/
void floorTwoMasterBed()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |         |        (*)         |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void floorTwoMasterBath()
** Description: Map for when player is in the master bathroom
******************************************************************************/
void floorTwoMasterBath()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|                      |                     |                         |" << endl;
	cout << "|         Library      |                     |       Bedroom           |" << endl;
	cout << "|                      O                     O                         |" << endl;
	cout << "|       _______________|    2nd Floor Hall   |_________X_______________|" << endl;
	cout << "|       |         |  |                 |-----|                         |" << endl;
	cout << "|       |         |  |________O________|-----|                         |" << endl;
	cout << "|       |  Master |                    |-----|         (Illegible)     |" << endl;
	cout << "|       |  Bath   |    Master Bedroom  |stair|                         |" << endl;
	cout << "|       |         O                    |down-|                         |" << endl;
	cout << "|       |   (*)   |                    |-----|                         |" << endl;
	cout << "|_______|_________|____________________|-----|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}


/******************************************************************************
** Function Name: void basementMap()
** Description: Template map for the basement of the haunted house
******************************************************************************/
void basementMap()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|         Workshop   |             |                                   |" << endl;
	cout << "|                    O             |                                   |" << endl;
	cout << "|                    |             |__________                         |" << endl;
	cout << "|                    |                       |                         |" << endl;
	cout << "|                    |    Storage            |                         |" << endl;
	cout << "|                ____|                       |         (DANGER)        |" << endl;
	cout << "|_______________|                            |                         |" << endl;
	cout << "| |stairs | | |  |                           |                         |" << endl;
	cout << "| |up | | | | |  O                           O                         |" << endl;
	cout << "|_|_|_|_|_|_|_|__|___________________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}

/******************************************************************************
** Function Name: void basementStorage()
** Description: Map for when the player is in the storage area in basement
******************************************************************************/
void basementStorage()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|         Workshop   |             |                                   |" << endl;
	cout << "|                    O             |                                   |" << endl;
	cout << "|                    |             |__________                         |" << endl;
	cout << "|                    |                       |                         |" << endl;
	cout << "|                    |    Storage            |                         |" << endl;
	cout << "|                ____|                       |         (DANGER)        |" << endl;
	cout << "|_______________|            (*)             |                         |" << endl;
	cout << "| |stairs | | |  |                           |                         |" << endl;
	cout << "| |up | | | | |  O                           O                         |" << endl;
	cout << "|_|_|_|_|_|_|_|__|___________________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}

/******************************************************************************
** Function Name: void basementWorkshop()
** Description: Map for when player is in the workshop in the basement
******************************************************************************/
void basementWorkshop()
{
	cout << " ______________________________________________________________________" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|                    |             |                                   |" << endl;
	cout << "|         Workshop   |             |                                   |" << endl;
	cout << "|                    O             |                                   |" << endl;
	cout << "|     (*)            |             |__________                         |" << endl;
	cout << "|                    |                       |                         |" << endl;
	cout << "|                    |    Storage            |                         |" << endl;
	cout << "|                ____|                       |         (DANGER)        |" << endl;
	cout << "|_______________|                            |                         |" << endl;
	cout << "| |stairs | | |  |                           |                         |" << endl;
	cout << "| |up | | | | |  O                           O                         |" << endl;
	cout << "|_|_|_|_|_|_|_|__|___________________________|_________________________|" << endl;
	cout << endl;
	cout << endl;
	cout << "Key: X = Locked Door" << endl;
	cout << "     O = Unlocked Door" << endl;
	cout << "     OO = Safe Travel" << endl;
	cout << "     (*) = Character Location" << endl;
}