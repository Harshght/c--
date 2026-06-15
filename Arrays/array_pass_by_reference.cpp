// array pass by reference is a simple program that demonstrates how to pass an array to
// a function by reference in C++. It includes examples of how to declare, initialize, and access elements of an array.
#include<iostream>
using namespace std;

void changeArray(int (&arr)[5]){
    for(int i=0; i<5; i++){
        arr[i] *= 2; // modifying the array elements by multiplying them by 2
    }
}

    int main(){
        int arr[5] = {1, 2, 3, 4, 5};
        changeArray(arr);
        for(int i=0; i<5; i++){
            cout << arr[i] << " ";
        }
        return 0;
    }
