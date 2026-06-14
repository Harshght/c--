// user input taking in C++
#include <iostream> 
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'

int main() {
    int num1, num2; // Declare two integer variables to store user input

    cout << "Enter the first number: "; // Prompt the user to enter the first number
    cin >> num1; // Read the first number from user input and store it in 'num1'

    cout << "Enter the second number: ";// Prompt the user to enter the second number
    cin >> num2; // Read the second number from user input and store it in 'num2'

    int sum = num1 + num2; // Calculate the sum of 'num1' and 'num2' and store it in 'sum'
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl; // Output the result to the console

    return 0; // Return 0 to indicate that the program ended successfully
}