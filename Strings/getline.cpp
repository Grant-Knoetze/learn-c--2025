/*Use getline to read a line of text from an input stream like cin or a file
 and store it in a string. It is useful when you want to read an entire line of
 input including spaces, rather than just a single word.*/
#include <iostream>
#include <string>
using namespace std;

int main() {

	// Declare a string variable called userInput.
	string userInput;

	// Prompt the user for input.
	cout << "Please enter your answer here: ";

	// Use getline to read the entire line of input
	getline(cin, userInput);

	// Output the input.
	cout << "Your answer is: " << userInput << endl;

	return 0;
}