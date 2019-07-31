//////////////////////////////////////////////////////////////////
// File Name: Turtle.h                                          //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Main class of the program. Contains the menu        //
// function allowing to user to maneuver through the program.   //
// Contains functions that initializes the grid, and allow it   //
// to be printed for the user.                                  //
// Contains key functions that allow the turtle to effectively  //
// move across the grid.                                        //
//////////////////////////////////////////////////////////////////

#ifndef TURTLE_H
#define TURTLE_H
#include "Pen.h"
#include "Direction.h"
#include "Position.h"

using namespace std;

class Turtle
{
public:
	Turtle(); //constructor
	~Turtle(); //destructor
	void menuprompt();
	void Menu();
	void printgrid();
	void initgrid();
	void jump();
	void walk();

	char grid[20][20];
	int height = 20;
	int width = 20;
	char turt = 'T';

private:
	int selection;
	Pen P1;
	Direction D1;
	Position Po1;
	int newx; //temporary x value
	int newy; //temporary y value
	int move;

};



#endif
