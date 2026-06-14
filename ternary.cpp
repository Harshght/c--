//ternary operator is a conditional operator that takes three operands: a condition, an expression to execute if the condition is true, and an expression to execute if the condition is false. It is often used as a shorthand for simple if-else statements.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number; // This line takes input from the user and stores it in the variable 'number'.
    
    // Using the ternary operator to check if the number is positive, negative, or zero
    string result = (number > 0) ? "The number is positive." : (number < 0) ? "The number is negative." : "The number is zero.";
    cout << result << endl; // This line will print the result of the ternary operator to the console.
    
    return 0; // This line indicates that the program ended successfully.
}