// String length can be thought of as the number of characters in the string
// String length can also refer to the number of bytes in the string
// One character usually equals one byte except with unicode and multi-byte characters
#include <iostream>
#include <cstring> // For strcpy, strcat etc
using namespace std;

int main()
{
    char string1[] = "word1", string2[] = "word2";
    /*This declares a character array (also known as a C-style string) named string1.
      The array is initialized with the string literal "word1".
      The size of the array is automatically determined by the compiler based on the length of the string literal. In this case,
      "word1" has 5 characters ('w', 'o', 'r', 'd', '1'), but the compiler adds a null terminator ('\0') at the end to mark the end of the string. 
      So, the total size of string1 is 6 bytes.*/
    char result[160];
    strcpy_s(result, string1); // Add word to the result string.
    strcat_s(result, " "); // Add a space between the 2 words.
    strcat_s(result, string2); // Concatenate word2 to the result.
    int lengthOfString{ -1 }; // If anything goes wrong we will know since the value will be "-1"
    lengthOfString = strlen(result); // Set the length of our result string to this variable.
    cout << result<<"\n"<<"Length of string is " << lengthOfString<<"\n"; // Display the value of the result string and its length.


    using namespace std;

        char source[] = "Hello, World!";
        char destination[20]; // Make sure destination is large enough
        /*strcpy_s is better suited than strcpy as it checks the
        bounds of the destination to mitigate against an overflow attack.
        If the source string is too large to fit in the destination buffer, strcpy_s will truncate the string
        and null-terminate it, or it may set the destination buffer to an empty string (depending on the implementation).*/
        strcpy_s(destination, source); // Copy source to destination

        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;

        return 0;
    
}

