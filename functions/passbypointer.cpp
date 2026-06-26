#include <iostream>
using namespace std;

// Function declaration taking an integer pointer (int*)
void celebrateBirthday(int* agePtr) {
    if (agePtr != nullptr) { // Safety check!
        *agePtr = *agePtr + 1;
        cout << agePtr <<endl;
        cout<< *agePtr <<endl; // Dereferencing to change the value in main's stack
    }
}

int main() {
    int age = 17;
    
    cout << "Age before birthday: " << age << endl; // Output: 17

    // Calling the function: We use the ampersand (&) to pass the memory address of age
    celebrateBirthday(&age);

    cout << "Age after birthday: " << age << endl; 
    cout << &age <<endl; // Output: 18
    return 0;
}    
