#include<iostream>
using namespace std;
int main(){
    char *ptr; // declaring a pointer to char
    char ch = 'A';
    ptr = &ch; // storing the address of ch in ptr
    cout << "Value of ch: " << ch << endl; // Output: A
    cout << "Address of ch: " << &ch << endl; // Output: memory address of ch
    cout << "Value stored in ptr (address of ch): " << ptr << endl; // Output: memory address of ch
    cout << "Value pointed to by *ptr: " << *ptr << endl; // Output: A (dereferencing the pointer)
    
    *ptr = 'B'; // Modifying the value at the address stored in ptr
    cout << "Value of ch after modification through pointer: " << ch << endl; // Output: B
    
    char *str = "Hello"; // declaring a pointer to a string literal
    cout << "Value of str: " << str << endl; // Output: Hello
    //unlike int *ptr = 2000; which is not valid because it assigns an integer value to a pointer variable, char *str = "Hello"; is valid because it assigns the address of the string literal "Hello" to the pointer variable str. String literals are stored in read-only memory, and the pointer str points to the first character of the string literal. Therefore, it is valid to assign a string literal to a char pointer, but it is not valid to assign an integer value to a pointer variable.
    // it is possible because str is a pointer to a string literal, which is stored in read-only memory. Attempting to modify the string literal through the pointer will lead to undefined behavior. Therefore, it is not recommended to modify the string literal through the pointer.
    //it is not possible to modify the string literal through the pointer, as string literals are stored in read-only memory. Attempting to modify it will lead to undefined behavior.
    return 0;
}