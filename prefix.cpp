#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing

int main(){
    int value {5};
    ++value; // This line increments the value of 'value' by 1 using the pre-increment operator (++value). The pre-increment operator increments the value before it is used in any expression.
    cout << "Value after pre-increment: " << value << endl; // This line
   //or
    cout << "Value: " << ++value << endl; // This line increments the value of 'value' by 1 again using the pre-increment operator and then outputs the new value to the console.
}