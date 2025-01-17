// ifElse.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Simple program to see if a candidate is > 18 Years old to
 test for eligibility for a driving license*/ 

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible for a drivers license" << endl;
    }

    else {
        cout << "You are too young to drive" << endl;
    
    }
}

