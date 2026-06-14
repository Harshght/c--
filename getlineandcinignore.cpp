#include<iostream>
#include<string>
using namespace std; // This line allows us to use the standard library functions and objects without needing
// to prefix them with 'std::'
int main(){
    int age;
string name;

cout << "Age: ";
cin >> age;

//cin.ignore(); // Clears the newline character so the next line works!

cout << "Name: ";
getline(cin, name);// This line reads a line of text from the input stream (cin) and stores it in the 'name' variable. This allows the user to enter their full name, including spaces, without truncating it at the first space character.
// for working with getline after cin, we need to use cin.ignore() to clear the newline character left in the input buffer by the previous cin statement. This ensures that the getline function works correctly and allows the user to input their name without any issues.
cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}