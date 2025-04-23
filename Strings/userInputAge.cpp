// userInput.cpp : This file contains the 'main' function. Program execution begins and ends there.  
//  
#include <iostream>  
#include <string>


int main()  
{  
	std::string age;
	std::cout << "Please enter your age: ";
	std::cin >> age;

	int YearOfBirth = 2025 - std::stoi(age.c_str());
	std::string result = std::to_string(YearOfBirth);

	std::cout << "You were born in the year: " << result.c_str() << std::endl;


}
