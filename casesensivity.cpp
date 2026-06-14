#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'

int main(){
    int name = 10; // This line declares an integer variable named 'name' and initializes it with the value 10. In C++, variable names are case-sensitive, which means that 'name' and 'Name' would be considered different variables. However, it is generally not recommended to use variable names that are the same as common identifiers (like 'name') to avoid confusion and improve code readability.
    cout << "Name: " << name << endl; // This line prints the value of the variable 'name' to the console. Since 'name' is an integer variable with the value 10, this will output "Name: 10" to the console.
    int Name = 20; // This line declares another integer variable named 'Name' (with an uppercase 'N') and initializes it with the value 20. Due to case sensitivity in C++, 'Name' is a different variable from 'name', and it can coexist without any issues. However, using such similar variable names can lead to confusion for anyone reading the code, so it's generally best to choose more descriptive and distinct variable names.
    cout << "Name: " << Name << endl; // This line prints the value of
}