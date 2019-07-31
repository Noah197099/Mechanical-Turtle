/////////////////////////////////////////////////////////////////////
// File Name: cs132_p1_Driver.cpp                                  //
//                                                                 //
// Programmer: Noah Saleh                                          //
//                                                                 //
// Purpose: Main Driver. Calls initgrid function and menu function.//
//                                                                 //
// Date Created: 10/05/2018                                        //
//                                                                 //
//Date Last Revised: 10/13/2018                                    //
/////////////////////////////////////////////////////////////////////



#include <iostream>
#include <string>
#include <iomanip>
#include "Turtle.h"
using namespace std;

int main()
{
	cout << "Below is a menu that will assist you in maneuvering through the Mechanical Turtle program." << endl << endl;
	Turtle T1;
	//function calls
	T1.initgrid();
	T1.menuprompt();
	T1.Menu();

	return 0;
}
//end main