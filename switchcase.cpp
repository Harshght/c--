#include<iostream>
using namespace std;
int main(){
    const char grade = 'C'; // This line declares a constant character variable named 'grade' and initializes it with the value 'B'.
    switch (grade) { // This line starts a switch statement that will evaluate the value of the 'grade' variable.
        case 'A': // This case will be executed if 'grade' is equal to 'A'.
            cout << "Excellent!" << endl; // If the grade is 'A', this line will be executed, printing "Excellent!" to the console.
            break; // The break statement prevents the execution from falling through to the next case.
        case 'B': // This case will be executed if 'grade' is equal to 'B'.
            cout << "Good job!" << endl; // If the grade is 'B', this line will be executed, printing "Good job!" to the console.
            break; // The break statement prevents the execution from falling through to the next case.
        case 'C': // This case will be executed if 'grade' is equal to 'C'.
            cout << "You can do better." << endl; // If the grade is 'C', this line will be executed, printing "You can do better." to the console.
            break; // The break statement prevents the execution from falling through to the next case.
        default: // This block will be executed if none of the above cases match the value of 'grade'.
            cout << "Invalid grade." << endl; // If the grade does not match any of the cases, this line will be executed, printing "Invalid grade." to the console.
    }
    return 0; // This line indicates that the program ended successfully.
}