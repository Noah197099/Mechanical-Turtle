//////////////////////////////////////////////////////////////////
// File Name: Position.cpp                                      //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Non-templated implementations of the Position class //
//////////////////////////////////////////////////////////////////


#include "Position.h"

/***************************************************************************************************
*
*   Function Name:		Posiiton
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
Position::Position()
{}

/***************************************************************************************************
*
*   Function Name:		~Position
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
Position::~Position()
{}


/***************************************************************************************************
*
*   Function Name:		setx
*
*   Purpose:			sets the current x value to whatever is inputted
*
*   Input Parameters:		int x - whatever x value is passed in
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Position::setx(int x)
{
	currentx = x;
}

/***************************************************************************************************
*
*   Function Name:		sety
*
*   Purpose:			sets the current y value to whatever is inputted
*
*   Input Parameters:		int y - whatever y value is passed in
*
*   Output parameters:		none
*
*   Return Value:		none
*
***************************************************************************************************/
void Position::sety(int y)
{
	currenty = y;
}

/***************************************************************************************************
*
*   Function Name:		getx
*
*   Purpose:			returns the current x value
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		currentx
*
***************************************************************************************************/
int Position::getx()
{
	return currentx;
}

/***************************************************************************************************
*
*   Function Name:		gety
*
*   Purpose:			returns the current y value
*
*   Input Parameters:		none
*
*   Output parameters:		none
*
*   Return Value:		currenty
*
***************************************************************************************************/
int Position::gety()
{
	return currenty;
}