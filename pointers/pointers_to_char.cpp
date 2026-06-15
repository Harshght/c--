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
    
    return 0;
}