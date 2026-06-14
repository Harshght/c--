#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'

int main(){

    int a {10}; // This line declares an integer variable 'a' and initializes it with the value 10
    int b {20}; // This line declares an integer variable 'b' and initializes it
    int c {a + b}; // This line declares an integer variable 'c' and initializes it with the sum of 'a' and 'b'
    cout << "The sum of " << a << " and " << b << " is: " << c << endl; //here we use cout only we dont need to write std:: because we used line number 2 to avoid writing std:: before every standard library function or object
    return 0;
}