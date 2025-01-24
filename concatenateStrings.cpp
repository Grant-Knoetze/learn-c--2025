// concatenateStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string1[] = "word1", string2[] = "word2";
	char result[160];
	strcpy_s(result, string1); // Add word1 to the result string
	strcat_s(result, " "); // Add a space between the 2 words
	strcat_s(result, string2); // Concatenate word2 to the result
	cout << result << "\n"; // Display the value of the result string
}

