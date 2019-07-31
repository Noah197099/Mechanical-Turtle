//////////////////////////////////////////////////////////////////
// File Name: Pen.h                                             //
//                                                              //
// Programmer: Noah Saleh                                       //
//                                                              //
// Purpose: Contains functions that allow the pen to be put in  //
// the up or down state, and that allow the brush type to be    //
// changed.                                                     //
//////////////////////////////////////////////////////////////////


#ifndef PEN_H
#define PEN_H

#include <string>
using namespace std;

class Pen
{
public:
	Pen();
	~Pen();
	void changebrush();
	void togglepen();
	char getbrush();
	char getpen();

	char currentbrush = '#';
	char currentpen = 'u';

private:

	char newbrush;
	char newpen;
};





#endif