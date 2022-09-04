/*
* Christopher Kelley
* 6-2 Debugging Assignment: Method Overloading
* IT 312 SNHU
* 8/4/22
*/

// Overloading.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  
//

//no stdafx.h header file - commented it out  
//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int add(int, int);
double add(double, double);

int main()
{
	int a, b, x;
	//Switched variable to Double
	double c, d, y;

	cout << "Enter two integers\n";

	cin >> a >> b;

	//swapped out 'c' for 'b' 
	x = add(a, b);
	cout << "Sum of integers: " << x << endl;

	cout << "Enter two doubles\n";
	cin >> c >> d;
	//removed a, b for c, d
	y = add(c, d);
	cout << "Sum of doubles: " << y << endl;

	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	//statement needed to return the 'sum' variable 
	return sum;
}

double add(double a, double b)
{
	double sum;
	sum = a + b;
	//Return statement error - missing closing statement
	return sum;
}