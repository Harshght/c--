#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'
int main(){
    bool isStudent; // This line declares a boolean variable named 'isStudent' and initializes it with the value true. The 'bool' data type is used to store boolean values, which can be either true or false. In this case, 'isStudent' indicates whether a person is a student or not, with true meaning they are a student and false meaning they are not.
   cout << "Is student: ";// This line prints the value of the variable 'isStudent' to the console. Since 'isStudent' is a boolean variable with the value true, this will output "Is student: 1" to the console, where 1 represents true in C++.
    cin >> isStudent; // This line reads a boolean value from user input and stores it in the variable 'isStudent'. The user can enter '1' for true or '0' for false when prompted.
    if (isStudent==false)
    {
        cout << "You are a student." << endl; // This line will execute if the user entered '1' (true) for 'isStudent', indicating that they are a student.
    }
    else
    {
        cout << "You are not a student." << endl; // This line will execute if the user entered '0' (false) for 'isStudent', indicating that they are not a student.    
    }
    
   bool isStudent2 = false; // This line declares another boolean variable named 'isStudent2' and initializes it with the value false. This variable can be used to represent a different state or condition related to being a student, such as whether the person is currently enrolled in school or not.
   cout << "Is student2: " << isStudent2 << endl; // This line
   
   
   
    // This line prints the value of the variable 'isStudent' to the console. Since 'isStudent' is a boolean variable with the value true, this will output "Is student: 1" to the console, where 1 represents true in C++.
}