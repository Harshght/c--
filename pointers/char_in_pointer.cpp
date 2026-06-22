#include <iostream>
using namespace std;
int main (){
    char *arr = "HelloWorld"; // declaring a pointer to a string literal
    cout << "Size of the character array: " << sizeof(arr) << endl; //

    cout << "Value of arr: " << arr << endl; // Output: HelloWorld
    cout << "Address of arr: " << *arr << endl; // Output: memory address of arr
}