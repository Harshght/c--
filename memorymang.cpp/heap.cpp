#include <iostream>
using namespace std;

int main() {
    // ==========================================
    // 1. THE STACK EXAMPLE
    // ==========================================
    cout << "--- Stack Memory Execution ---" << endl;
    {
        // This variable is stored on the stack
        int local_var = 10; 
        cout << "Local variable value: " << local_var << endl; // Output: 10
        cout << "Address of local_var: " << &local_var << endl;
        
    } // 🚪 Scope closes! local_var is instantly destroyed from the stack here.
    
    // cout << local_var; // ❌ ERROR: Uncommenting this will crash the compiler 
    // because local_var does not exist outside its curly braces.


    // ==========================================
    // 2. THE HEAP EXAMPLE (Fixed & Connected)
    // ==========================================
    cout << "\n--- Heap Memory Execution ---" << endl;
    
    // We declare the pointer key OUTSIDE any inner blocks so it stays alive!
    int* ptr = nullptr; 

    {
        // 'new' allocates 4 bytes on the Heap pool permanently
        ptr = new int; 
        
        // We reach across into the heap and assign our value
        *ptr = 42; 
        
        cout << "Value inside the heap: " << *ptr << endl; // Output: 42
        cout << "Address inside the heap: " << ptr << endl;
        
    } // 🚪 Inner scope closes here! 
    // The value 42 is STILL alive in the heap because heap doesn't care about braces.

    // ✅ This works perfectly now because 'ptr' was declared outside the braces!
    cout << "Accessing heap value outside block: " << *ptr << endl; // Output: 42

    // ==========================================
    // 3. THE CLEANUP (Crucial!)
    // ==========================================
    // Since we are completely done using our heap variable, we free it now:
    delete ptr; 
    
    // Best practice: clear out the pointer so it doesn't hold a dead address
    ptr = nullptr; 

    cout << "\nHeap memory successfully deallocated!" << endl;
    return 0;
}