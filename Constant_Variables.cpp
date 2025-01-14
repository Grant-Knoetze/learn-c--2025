// Constant_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Create a global variable.
/*If we need to use a variable that cannot be changed,
we create a constant variable. Examples include days of
the week etc*/
// Once declared, we cannot modify the const variable.
const int days_in_week{ 7 };
const double pi{ 3.1415926 };
int age{ 45 };

int main()
{
	int age_2{ 30 };
	const int i{ 2 };
	// We cannot increment i at all for example i++;
	cout << age << endl; // Output age.



}


