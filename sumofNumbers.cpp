//user input method to find sum of two numbers

#include<iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a + b;
    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
// predefined values to find sum of two numbers
  int x = 10;
  int y = 0;

  int result = x + y; // This will cause a runtime error (division by zero)
  std::cout << "Result: " << result << std::endl; // This will also cause a runtime error (division by zero)

    return 0;
}

//statement  are executed in order from top to bottom  when the program is run 
//execution keeps going until there is a statement causing the program terminate or run another sequence of statements  or the end of the main function is reached