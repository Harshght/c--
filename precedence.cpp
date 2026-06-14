// a+b*c-d/e-f+g then which operator will be evaluated first?
// answer is * then / then + and -
#include<iostream>
using namespace std; // This line allows us to use the standard library functions and objects without needing
// to prefix them with 'std::'
int main(){
    int a = 5, b = 10, c = 15, d = 20, e = 25, f = 30, g = 35; // Declare and initialize variables for the expression
    int result = a + b * c - d / e - f + g; // This line calculates the result of the expression using operator precedence rules. The multiplication (*) and division (/) operators will be evaluated first, followed by addition (+) and subtraction (-).
    cout << "Result: " << result << endl; // Output the result of the expression to the console
}
//we have to talk on ovulation