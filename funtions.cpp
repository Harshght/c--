#include<bits/stdc++.h> // This line includes the entire C++ standard library, which provides various functions and classes for input/output, data structures, algorithms, etc.

int addNumbers(int a, int b) { // This function takes two integers as input and returns their sum
    return a + b; // This line calculates the sum of 'a' and 'b' and returns the result to the caller
}

int main(){ // The main function is the entry point of the program where execution starts
    int num1 = 9;
    int num2 = 8;
    int result = addNumbers(num1,num2); // This will call the addNumbers function and store the result in the variable 'result'
    std::cout << "Result: " << result << std::endl;

    int sum = addNumbers(5, 10); // This will call the addNumbers function with the values 5 and 10 and store the result in the variable 'sum'
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}