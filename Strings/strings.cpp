// strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
// In C++, characters are held in a data type named char
// A string is a data type that holds one or more characters
// Strings are always NULL terminated
/*#include <iostream>
#include <cstring>
std::string mystring;
std::string test1("This is my string");
std::string test1 = "This is my new value";
char string1[50] = "test";
strcpy_s(string1, sizeof(string1), "This is a new value too");

int main()
{
    std::cout << "Hello World!\n";
}*/
#include <iostream>
#include <cstring>

int main() {
    // Allocate a larger buffer for the destination
    char string1[50] = "test"; // Ensure the buffer is large enough for the new string

    // Use strcpy_s with the correct syntax
    strcpy_s(string1, sizeof(string1), "This is a new value too");

    // Output the result
    std::cout << "String1: " << string1 << std::endl;

    return 0;
}


