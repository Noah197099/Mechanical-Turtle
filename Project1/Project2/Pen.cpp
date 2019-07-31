//////////////////////////////////////////////////////////////////
// File Name: Pen.cpp                                           //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Non-templated implementations of the Pen class      //
//////////////////////////////////////////////////////////////////

#include <iostream>
#include "Pen.h"

/***************************************************************************************************
*
*   Function Name:		Pen
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
Pen::Pen()
{}

/***************************************************************************************************
*
*   Function Name:		~Pen
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
Pen::~Pen()
{}

/***************************************************************************************************
*
*   Function Name:		changebrush
*
*   Purpose:			Prompts the user on what they would like the brush to become, and changes it
*                       to whatever value is inputted
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Pen::changebrush()
{
	cout << "Your current brush is set to: " << currentbrush << endl <<
		"Please select what you would like your new brush to be: #, $, %, or &" << endl;

	cin >> newbrush;

	while (!cin || cin.peek() != '\n')
	{
		cout << "Invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');

		cin >> newbrush;
	}
	
		switch (newbrush)
		{
			case '#':
				newbrush = '#';
				cout << "Your brush has been set to #" << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
				break;
			case '$':
				newbrush = '$';
				cout << "Your brush has been set to $" << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
				break;
			case '%':
				newbrush = '%';
				cout << "Your brush has been set to %" << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
				break;
			case '&':
				newbrush = '&';
				cout << "Your brush has been set to &" << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
				break;
			default:
				cout << "Invalid option." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
				newbrush = currentbrush;
				break;
		}
	currentbrush = newbrush;
}

/****************************************************************************************************
*
*   Function Name:		togglepen
*
*   Purpose:			Prompts the user on what they would like the pen's position to be, and changes
*                       it to whatever value is inputted
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
******************************************************************************************************/
void Pen::togglepen()
{
	if (currentpen = 'u')
	{
		cout << "Pen position is currently up, meaning the turtle WILL NOT write in this position. Would you like your new pen position to be u (up) or d (down)?" << endl;
	}
	else if (currentpen = 'd')
	{
		cout << "Pen position is down, meaning the turtle WILL write in this position. Would you like your new pen position to be u (up) or d (down)?" << endl;
	}

	cin >> newpen;

	while (!cin || cin.peek() != '\n')
	{
		cout << "Invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');
			cin >> newpen;

	}

		switch (newpen)
		{
		case 'u':
			newpen = 'u';
			cout << "Your pen has been set to the up state." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		case 'd':
			newpen = 'd';
			cout << "Your pen has been set to the down state." << endl << "Directing back to menu. Press 8 to see menu again if necessary." << endl;
			break;
		default:
			cout << "Invalid option. Directing back to menu. Press 8 to see menu again if necessary." << endl;
			newpen = currentpen;
			break;

		}
	currentpen = newpen;
}
/***************************************************************************************************
*
*   Function Name:		getbrush
*
*   Purpose:			returns the current brush value
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		currentbrush
*
***************************************************************************************************/
char Pen::getbrush()
{
	return currentbrush;
}

/***************************************************************************************************
*
*   Function Name:		getpen
*
*   Purpose:			returns the current pen value
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		currentpen
*
***************************************************************************************************/
char Pen::getpen()
{
	return currentpen;
}