//pointer are variables that store the memory address of another variable
#include <iostream>
using namespace std;    
int main(){
    int num = 10;
    int *ptr; // * this symbol is used to declare a pointer variable  it used for accessing data inside the memory location it points to // special variable that can only store address of other variable and declaring a pointer variable that can point to an integer
    ptr = &num; //& this symbol is used to get the address of a variable // pointer variable that stores the address of num
    cout << "Value of num: " << num << endl; // Output: 10
    cout << "Address of num: " << &num << endl; // Output: memory address of num
    cout << "Value stored in ptr (address of num): " << ptr << endl; // Output: memory address of num
    cout << "Value pointed to by *ptr: " << *ptr << endl; // Output: 10 (dereferencing the pointer)
    
    *ptr = 20; // Modifying the value at the address stored in ptr
    cout << "Value of num after modification through pointer: " << num << endl; // Output: 20
    // ptr store the address of num and *ptr is used to access the value at that address, so when we modify *ptr, we are actually modifying the value of num through the pointer.
   
    cout << "Size of the pointer variable ptr: " << sizeof(ptr) << " bytes" << endl; // Size of the pointer variable in bytes (typically 4 or 8 bytes depending on the system architecture)
    cout << "Size of the value pointed to by ptr: " << sizeof(*ptr) << " bytes" << endl; // Size of the value pointed to by ptr (size of an int, typically 4 bytes)
    cout << "Size of the pointer variable ptr: " << sizeof(int*) << " bytes" << endl; // Size of the pointer variable in bytes (typically 4 or 8 bytes depending on the system architecture)
    return 0;
} 