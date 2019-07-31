//////////////////////////////////////////////////////////////////
// File Name: Turtle.cpp                                        //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Non-templated implementations of the Turtle class   //
//////////////////////////////////////////////////////////////////


#include "Turtle.h"
#include <iostream>

/***************************************************************************************************
*
*   Function Name:		Turtle
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
Turtle::Turtle()
{}

/***************************************************************************************************
*
*   Function Name:		~Turtle
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
Turtle::~Turtle()
{}

/***************************************************************************************************
*
*   Function Name:		menuprompt
*
*   Purpose:			Brings up the menu.
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::menuprompt()
{
	cout << "Please make a selection 1-9." << endl <<
		"1. Change Pen Position" << endl <<
		"2. Change Turtle Direction" << endl <<
		"3. Move Forward" << endl <<
		"4. Print Grid" << endl <<
		"5. Change Brush" << endl <<
		"6. Erase Grid/Start Over" << endl <<
		"7. Jump" << endl <<
		"8. See Menu Again" << endl <<
		"9. End Program" << endl;
}

/***************************************************************************************************
*
*   Function Name:		Menu
*
*   Purpose:			Allows the user to easily navigate throughout the program, and call the
*						proper functions.
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::Menu()
{


	cin >> selection;

	//input validation for menu selection
	while (!cin || cin.peek() != '\n' || selection < 0 || selection > 9)
	{
		cout << "that was an invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');
		cin >> selection;
	}
		//switch statement for menu selections
		switch (selection)
		{
		case 1:
			//change pen position (toggle)
			P1.togglepen();
			Menu();
			break;
		case 2:
			//turn (change direction)
			D1.changedirection();
			Menu();
			break;
		case 3:
			//move forward
			walk();
			Menu();
			break;
		case 4:
			//print grid
			printgrid();
			Menu();
			break;
		case 5:
			//change brush
			P1.changebrush();
			Menu();
			break;
		case 6:
			//erase/start over
			initgrid();
			cout << "Grid has been reinitialized. Press 8 to see menu again if necessary." << endl;
			Menu();
			break;
		case 7:
			//jump to specific point
			jump();
			Menu();
			break;
		case 8:
			//see menu again
			menuprompt();
			Menu();
			break;
		case 9:
			//end program
			exit(0);
		default:
			cout << "Invalid selection. Please try again." << endl;
			break;

		}

}

/***************************************************************************************************
*
*   Function Name:		printgrid
*
*   Purpose:			Prints the current state of the grid
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::printgrid()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Press 8 to see menu again if necessary." << endl;
}

/***************************************************************************************************
*
*   Function Name:		initgrid
*
*   Purpose:			Initializes the grid, resets the position of the turtle, and resets the
*						direction and brush type to their default settings.
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::initgrid()
{

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = '*';
		}
	}

	grid[0][0] = turt;

	Po1.setx(0);
	Po1.sety(0);
	D1.currentdir = 'e';
	P1.currentbrush = '#';

}

/***************************************************************************************************
*
*   Function Name:		jump
*
*   Purpose:			Moves the turtle to any user-inputted position on the grid, and leaves a
*						brush stroke behind
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::jump()
{
	int tempy = Po1.gety();
	int tempx = Po1.getx();


	cout << "Enter (from 0-19) where on the x-axis you would like the turtle to jump." << endl;

	cin >> newx;

		while (!cin || cin.peek() != '\n' || newx < 0 || newx > 19)
		{
			cout << "that was an invalid option. Please try again." << endl;
			cin.clear();
			cin.ignore(200, '\n');

			cin >> newx;
		}

	Po1.setx(newx);

	cout << "Enter (from 0-19) where on the y-axis you would like the turtle to jump." << endl;

	cin >> newy;

	while (!cin || cin.peek() != '\n' || (newy > 19 || newy < 0))
	{
		cout << "that was an invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');

		cin >> newy;
	}
	Po1.sety(newy);
	if (P1.getpen() == 'u')
	{
		grid[tempy][tempx] = '*';
	}
	else if (P1.getpen() == 'd')
	{
		grid[tempy][tempx] = P1.getbrush();
	}
	grid[Po1.gety()][Po1.getx()] = turt;

	cout << "Turtle has jumped from:" << endl << "(" << tempx << "," << tempy
		 << ") to " << endl
		 << "(" << Po1.getx() << "," << Po1.gety() << ")" << endl
		 << "Press 8 to see menu again." << endl;

}

/***************************************************************************************************
*
*   Function Name:		walk
*
*   Purpose:			Moves the turtle however many units the user declares, in whatever direction
*						the turtle is facing
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Turtle::walk()
{
	cout << "Please enter how many units you'd like to move forward." << endl;

	int tempx = Po1.getx();
	int tempy = Po1.gety();

	switch (D1.getdir())
	{
	case 'e':

	cin >> move;

	while (!cin || cin.peek() != '\n' || ((move + Po1.getx()) > 19 || (move + Po1.getx()) < 0))
	{
		cout << "that was an invalid option. Please try again." << endl;
		cin.clear();
		cin.ignore(200, '\n');

		cin >> move;
	}
	if (P1.currentpen == 'u')
	{
		grid[tempy][tempx] = '*';
	}
	else if (P1.currentpen == 'd')
	{
		for (int j = Po1.getx(); j < (Po1.getx() + move); j++)
		{
			grid[Po1.gety()][j] = P1.getbrush();
		}
	}
	Po1.setx((Po1.getx() + move));
	grid[Po1.gety()][Po1.getx()] = turt;

		break;

	case 'n':

		cin >> move;

		while (!cin || cin.peek() != '\n' || ((Po1.gety() - move) > 19 || (Po1.gety() - move) < 0))
		{
			cout << "that was an invalid option. Please try again." << endl;
			cin.clear();
			cin.ignore(200, '\n');

			cin >> move;
		}
		if (P1.currentpen == 'u')
		{
			grid[tempy][tempx] = '*';
		}
		else if (P1.currentpen == 'd')
		{
			for (int i = Po1.gety(); i > (Po1.gety() - move); i--)
			{
				grid[i][Po1.getx()] = P1.getbrush();
			}
		}
		Po1.sety((Po1.gety() - move));
		grid[Po1.gety()][Po1.getx()] = turt;

		break;

	case 's':

		cin >> move;

		while (!cin || cin.peek() != '\n' || ((move + Po1.gety()) > 19 || (move + Po1.gety()) < 0))
		{
			cout << "that was an invalid option. Please try again." << endl;
			cin.clear();
			cin.ignore(200, '\n');

			cin >> move;
		}
		if (P1.currentpen == 'u')
		{
			grid[tempy][tempx] = '*';
		}
		else if (P1.currentpen =='d')
		{
			for (int i = Po1.gety(); i < (Po1.gety() + move); i++)
			{
				grid[i][Po1.getx()] = P1.getbrush();
			}
		}
		Po1.sety((Po1.gety() + move));
		grid[Po1.gety()][Po1.getx()] = turt;

		break;

	case 'w':

		cin >> move;

		while (!cin || cin.peek() != '\n' || ((Po1.getx() - move) > 19 || (Po1.getx() - move) < 0))
		{
			cout << "that was an invalid option. Please try again." << endl;
			cin.clear();
			cin.ignore(200, '\n');

			cin >> move;
		}
		if (P1.currentpen == 'u')
		{
			grid[tempy][tempx] = '*';
		}
		else if (P1.currentpen == 'd')
		{
			for (int j = Po1.getx(); j > (Po1.getx() - move); j--)
			{
				grid[Po1.gety()][j] = P1.getbrush();
			}
		}
		Po1.setx((Po1.getx() - move));
		grid[Po1.gety()][Po1.getx()] = turt;

		break;
	}
	cout << "Turtle has moved " << move << " units to: " << endl << "(" << Po1.getx() << "," << Po1.gety() << ")" << endl;
	cout << "Press 8 to see menu again" << endl;
}