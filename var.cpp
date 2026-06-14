#include<bits/stdc++.h>
using namespace std; // This line allows us to use the standard library functions and objects without needing to prefix them with 'std::'
int main() {
    int age = 25; // This line declares an integer variable named 'age' and initializes it with the value 25. The 'int' data type is used to store whole numbers without decimal points. In this case, 'age' represents a person's age, which is typically expressed as a whole number.
    cout << "Age: " << age << endl; // This line prints the value of the variable 'age' to the console. Since 'age' is an integer variable with the value 25, this will output "Age: 25" to the console.
    int age = 30; // This line declares another integer variable named 'age' and initializes it with the value 30. However, this will cause a compilation error because we cannot declare two variables with the same name in the same scope. To fix this issue, we can either rename the second variable or remove the first declaration of 'age'.
    cout << "Age: " << age << endl; // This line will not execute due
}