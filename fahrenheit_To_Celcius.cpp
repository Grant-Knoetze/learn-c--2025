// fahrenheit_To_Celcius.cpp : This file contains the 'main' function. Program execution begins and ends there.
// User must enter temp in Fahrenheit and display in Celsius
// Formula: temp_c = (temp_f - 32)*(5.0/9.0)
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
  
	float temp_f{}, temp_c{};
	cout << "Enter the temperature in Farenheit" << endl;
	cin >> temp_f;
	temp_c = (temp_f - 32) * (5.0 / 9.0);
	cout << "The temperature in Celcius is "
		<< temp_c << "\n";


}

