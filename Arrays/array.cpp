//arrays is a simple program that demonstrates the use of arrays in C++. It includes examples of how to declare, initialize, and access elements of an array.
#include<iostream>
using namespace std;
int main(){
    //declaring an array of integers with 5 elements
    int arr[5];

    //initializing the array with values
    // cout << "Enter 1st value of array integers: ";
    // cin >> arr[0];
    // cout << "Enter 2nd value of array integers: ";
    // cin >> arr[1];
    // cout << "Enter 3rd value of array integers: ";
    // cin >> arr[2];
    // cout << "Enter 4th value of array integers: ";
    // cin >> arr[3];
    // cout << "Enter 5th value of array integers: ";
    // cin >> arr[4];

    // for(int i=0; i<5; i++){  //reverse printing of array elements
    //     cin >> arr[i];
    // }

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    //accessing and printing the elements of the array
    cout << "The elements of the array are: " ;
    for(int i=5; i>0; i--){
        cout << arr[i-1]*2 << " ";
    }
    cout << endl;

    return 0;
}