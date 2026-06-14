//loops is a simple program that demonstrates the use of loops in C++. It includes examples of for loops, while loops, and do-while loops.
#include<iostream>  
using namespace std;
int main(){
    //for loop example
    cout << "For loop example:" << endl; // This line prints a message to the console indicating that the following code is an example of a for loop.
    for (int i = 0; i < 5; i++) { // This line starts a for loop that initializes an integer variable 'i' to 0, checks if 'i' is less than 5, and increments 'i' by 1 in each iteration.
        cout << i << " "; // This line prints the current value of 'i' followed by a space to the console in each iteration of the loop.
    }
    cout << endl; // This line prints a newline character to the console after the for loop has completed.

    //while loop example
    cout << "While loop example:" << endl; // This line prints a message to the console indicating that the following code is an example of a while loop.
    int j = 0; // This line declares an integer variable 'j' and initializes it to 0.
    while (j < 5) { // This line starts a while loop that continues as long as 'j' is less than 5.
        cout << j << " "; // This line prints the current value of 'j' followed by a space to the console in each iteration of the loop.
        j++; // This line increments 'j' by 1 in each iteration of the loop.
    }
    cout << endl; // This line prints a newline character to the console after the while loop has completed.

    //do-while loop example
    cout << "Do-while loop example:" << endl; // This line prints a message to the console indicating that the following code is an example of a do-while loop.
    int k = 0; // This line declares an integer variable 'k' and initializes it to 0.
    do { // This line starts a do-while loop that will execute at least once before checking the condition.
        cout << "I love C++!" << endl; // This line prints the current value of 'k' followed by a space to the console in each iteration of the loop.
        k++; // This line increments 'k' by 1 in each iteration of the loop.
    } while (k < 5); // This line checks if 'k' is less than 5 after executing the block of code, and

}