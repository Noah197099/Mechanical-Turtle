//////////////////////////////////////////////////////////////////
// File Name: Direction.h                                       //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Allows the Turtle's direction to be changed and the //
// chosen direction is also stored.                             //
//////////////////////////////////////////////////////////////////

#pragma once

#ifndef DIRECTION_H
#define DIRECTION_H


class Direction
{
public:
	Direction();
	~Direction();
	void changedirection();
	char currentdir = 'e'; //character to hold the current direction value
	char getdir();


private:

	char newdir; //character to hold a temporary direction value

};





#endif
