#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // cout << "Size of the array: " << sizeof(arr) << " bytes" << endl; // Size of the entire array in bytes
    // cout << "Number of elements in the array: " << sizeof(arr) / sizeof(arr[0]) << endl; // Number of elements in the array
   
    cout << arr[8] << endl; // Accessing out of bounds index, leads to undefined behavior
   
    arr[8] = 10; // Modifying out of bounds index, leads to undefined behavior
    cout << arr[8] << endl; // Accessing the modified out of bounds index, still leads to undefined behavior
    return 0;
}