#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing
// to prefix them with 'std::'
int main(){
    int value {5};
    cout << "Value: " << value++ << endl; // This line outputs the current value of 'value' (which is 5) and then increments it by 1. The post-increment operator (value++) returns the original value before incrementing.
    cout << "Value after post-increment: " << value << endl; // This line
}