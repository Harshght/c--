//references behave like pointers but with a more convenient syntax. They allow you to create an alias for another variable, meaning that any changes made to the reference will directly affect the original variable it refers to. This is particularly useful for passing variables to functions without making copies, which can improve performance and allow for modifications to the original variable. In C++, references are declared using the '&' symbol and must be initialized when they are declared. Once a reference is initialized to a variable, it cannot be changed to refer to another variable.
//references behave like constant pointers that are automatically dereferenced, meaning you can use them just like the original variable they refer to. This makes references a powerful tool for creating more efficient and readable code, especially when working with functions that need to modify their arguments or when passing large objects without copying them. However, it's important to remember that references must be initialized at the time of declaration and cannot be reassigned to refer to a different variable later on.
//they dont require dereferencing syntax like pointers do, which can make code cleaner and easier to read. However, they also have some limitations compared to pointers, such as not being able to be null or reassigned to refer to a different variable after initialization. Overall, references are a fundamental feature of C++ that provide a convenient way to create aliases for variables and enable efficient function parameter passing.
// references and const
#include <iostream>
using namespace std;
int main() {
    int i = 5;
    const int& alias = i;  // 'alias' is a constant reference to 'i'
    
    cout << "Value of i: " << i << endl;        // Output: 5
    cout << "Value of alias: " << alias << endl; // Output: 5
    
    // alias = 10; // ❌ ERROR: Cannot modify 'alias' because it is a constant reference
    
    i = 10; // This will change the value of 'i', and 'alias' will reflect this change
    cout << "Value of i after modification: " << i << endl;        // Output: 10
    cout << "Value of alias after modification: " << alias << endl; // Output: 10
    
    return 0;
}