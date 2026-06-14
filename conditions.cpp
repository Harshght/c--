//conditions are used to control the flow of a program based on certain conditions. They allow us to execute different blocks of code depending on whether a condition is true or false. In C++, we can use if, else if, and else statements to create conditions.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number; // This line takes input from the user and stores it in the variable 'number'.
    
    if (number > 0) { // This condition checks if the number is greater than 0.
        cout << "The number is positive." << endl; // If the condition is true, this line will be executed.
    } else if (number < 0) { // This condition checks if the number is less than 0.
        cout << "The number is negative." << endl; // If this condition is true, this line will be executed.
    } else { // This block will be executed if neither of the above conditions are true, meaning the number is 0.
        cout << "The number is zero." << endl; // This line will be executed if the number is zero.
    }
    //nested conditions can also be used to check multiple conditions within another condition. For example, we can check if a number is even or odd within the condition that checks if the number is positive.
    if (number > 0) {
        if (number % 2 == 0) { // This condition checks if the number is even by checking if the remainder when divided by 2 is 0.
            cout << "The number is positive and even." << endl; // If the number is positive and even, this line will be executed.
        } else { // This block will be executed if the number is positive but not even, meaning it is odd.
            cout << "The number is positive and odd." << endl; // If the number is positive and odd, this line will be executed.
        }
    }
    
    return 0; // This line indicates that the program ended successfully.
}