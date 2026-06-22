#include <iostream>
using namespace std;
int main(){
    char *msg {"Hello"}; // declaring a pointer to a string literal
   //cant possible becoz it is read only memory not have capability to write // msg[0] = 'h'; // Modifying the first character of the array
    cout << "Modified message: " << msg << endl; // Output: Hello
    cout << "Address of msg: " << msg << endl; // Output: memory address of msg
    cout << "Value pointed to by *msg: " << *msg << endl; // Output: H (dereferencing the pointer)
    cout << "element at index 0: " << msg[0] << endl; // Output: H
}