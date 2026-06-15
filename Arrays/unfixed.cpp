//array size is not fixed, this program demonstrates how to pass an array to a function by reference in C++ when the size of the array is not known at compile time. It includes examples of how to declare, initialize, and access elements of an array using pointers.
#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // declaring and initializing an array of integers
    int size = sizeof(arr)/sizeof(arr[0]); // calculating the size of the array
    cout << "Size of the array: " << size << endl;
    return 0;
}