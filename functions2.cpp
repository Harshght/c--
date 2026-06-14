#include <iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'

int multiplyNumbers(int a, int b) { // This function takes two integers as input and returns their product
    return a * b; // This line calculates the product of 'a' and 'b' and returns the result to the caller
}  

int main(){
    int hello = multiplyNumbers(5, 10); // This will call the multiplyNumbers function with the values 5 and 10 and store the result in the variable 'hello'
    cout << "Hello: " << hello << endl; // This line prints the value of
}