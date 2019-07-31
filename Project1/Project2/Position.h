//////////////////////////////////////////////////////////////////
// File Name: Position.h                                        //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Stores the current x and y value of the turtle.     //
//////////////////////////////////////////////////////////////////


#pragma once

#ifndef POSITION_H
#define POSITION_H
#include <iostream>

using namespace std;

class Position
{
public:
	Position();
	~Position();
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();

	
	


private:

	int currentx = 0;
	int currenty = 0;

};





#endif