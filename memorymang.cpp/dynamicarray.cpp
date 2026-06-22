//arrays allocated on the heap with the new operator
#include <iostream>
using namespace std;
int main() {
    int size = 5; // Size of the dynamic array
    int* arr = new int[size]; // Allocate an array of integers on the heap

    // Check if memory allocation was successful
    if (arr == nullptr) {
        cerr << "Memory allocation failed!" << endl;
        return 1; // Exit with an error code
    }

    // Initialize the array with values
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // Assign values (1, 2, 3, 4, 5)
    }

    // Print the values in the array
    cout << "Dynamic Array Values: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory to prevent memory leaks
    delete[] arr; // Use delete[] for arrays
                                 
    return 0;
}