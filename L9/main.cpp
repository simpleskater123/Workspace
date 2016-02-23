/*************************************************************************
 * AUTHOR		: Jumpinjangles
 * STUDENT ID	: 1004627
 * LAB #9		: Eclipse Lab
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 03/02/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * ECLIPSE TUTORIAL
 * _______________________________________________________________________
 * This program will output the class heading
 * _______________________________________________________________________
 * INPUT:
 * 		<There is no input for this program - output data is obtained
 * 		through the constants.>
 *
 * OUTPUT:
 * 	<This program will output a class heading>
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 ********************************************************************/
	const char PROGRAMMER [30]	= "Jumpinjangles & Ragde";
	const char CLASS [5]		= "CS1A";
	const char SECTION [25]		= "MW: 10:00a - 12:00p";
	const int  LAB_NUM				= 10;
	const char LAB_NAME [25]	= "Intro to Programming";

	// variable declarations go here

	// OUTPUT - Class Heading
	cout << left;
	cout << "************************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n************************************************************\n\n";
	cout << right;

	//	INPUT - describe input here

	//	PROCESSING - describe processing here

	//	OUTPUT - describe output here

	return 0;
}
