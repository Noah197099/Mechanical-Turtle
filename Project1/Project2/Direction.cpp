//////////////////////////////////////////////////////////////////
// File Name: Direction.cpp                                     //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Non-templated implementations of the Direction class//
//////////////////////////////////////////////////////////////////





#include "Direction.h"
#include <iostream>

using namespace std;

/***************************************************************************************************
*
*   Function Name:		Direction
*
*   Purpose:			Constructor
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
Direction::Direction()
{}

/***************************************************************************************************
*
*   Function Name:		~Direction
*
*   Purpose:			Destructor
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
Direction::~Direction()
{}

/***************************************************************************************************
*
*   Function Name:		changedirection
*
*   Purpose:			Prompts the user on which direction they'd prefer the turtle to face, and
*						makes it face that direction
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Direction::changedirection()
{
	cout << "Your current direction is: " << currentdir << endl <<
		"What would you like your new direction to be: e, n, s, or w" << endl;
	cin >> newdir;
	
	while (!cin || cin.peek() != '\n')
	{
		cout << "Invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');
			cin >> newdir;

	}

		switch (newdir)
		{
		case 'e':
			newdir = 'e';
			cout << "Your current direction is e." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		case 'n':
			newdir = 'n';
			cout << "Your current direction is n." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		case 's':
			newdir = 's';
			cout << "Your current direction is s." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		case 'w':
			newdir = 'w';
			cout << "Your current direction is w." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		default:
			cout << "Invalid option. Directing back to menu. Press 8 to see menu again if necessary." << endl;
			newdir = currentdir;

			break;
		}

		currentdir = newdir;
}

/***************************************************************************************************
*
*   Function Name:		getdir
*
*   Purpose:			requests an integer from user
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		retuns the character currentdir
*
***************************************************************************************************/
char Direction::getdir()
{
	return currentdir;
}