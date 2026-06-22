//references in C++ is a feature that allows you to create an alias for another variable. A reference is essentially a pointer that is automatically dereferenced, meaning you can use it just like the original variable it refers to.
// In C++, references are declared using the '&' symbol. Once a reference is initialized to a variable, it cannot be changed to refer to another variable. References are often used for function parameters and return types to avoid copying large objects and to allow functions to modify the original variables.
//alias is a reference to the variable 'i', meaning that any changes made to 'alias' will directly affect 'i'. This is useful for passing variables to functions without making copies, allowing for more efficient code and the ability to modify the original variable.
// Example of using references in C++
#include <iostream>
using namespace std;
int main() {
    int i = 5;
    int& alias = i;  // 'alias' is a reference to 'i'
   cout << i << endl;  // Output: 5
    alias = 10;      // This will change the value of 'i'
    cout << i << endl;  // Output: 10
    return 0;
}