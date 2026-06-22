// stack is a simple stack implementation that uses a linked list to store the elements.

#include<iostream>
using namespace std;

int main (){
    //stack Eg
    {  int local_var = 10; // local variable stored on the stack
         cout << "Local variable: " << local_var << endl;
     } // Output: 10
       
   // cout << "Address of local_var: " << &local_var << endl; // Output: memory address of local_var
    // &local_var
    // ^^^^^^^^^^^
    int *ptr; // pointer variable stored on the stack, initialized to nullptr
    {
        
    int *ptr = new int; //new: This is a powerful keyword in C++. It tells your operating system: "Go into the Heap memory pool, find a free, empty spot that can hold data, and reserve it for me.// dynamically allocate memory for an integer
    *ptr = 42; // assign a value to the allocated memory
    }
 
    //ptr prints the address of the allocated memory
    //*ptr dereferences the pointer to get the value stored at that memory location
    //cout << "Pointer address: " << ptr << endl;
   // cout << "Value at pointer: " << *ptr << endl;
   delete ptr; // deallocate the dynamically allocated memory
    return 0;
}
