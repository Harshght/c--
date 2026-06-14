// taking input string from user in C++
#include <iostream> 
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'
int main() {
    string name; // Declare a string variable to store the user's name

    cout << "Enter your name: "; // Prompt the user to enter their name
    getline(cin, name); // Read the user's input and store it in the 'name' variable
   // The getline function is used to read a line of text from the input stream (cin) and store it in the 'name' variable. This allows the user to enter their full name, including spaces, without truncating it at the first space character.
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl; // Output a greeting message that includes the user's name

    return 0; // Return 0 to indicate that the program ended successfully
}