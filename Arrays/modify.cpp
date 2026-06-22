#include<iostream>
using namespace std;
int main(){
    char msg[] = "Hello"; // declaring and initializing a character array
    msg[0] = 'h'; // Modifying the first character of the array
    cout << "Modified message: " << msg << endl; // Output: hello
   cout << "element at index 0: " << msg[0] << endl; // Output: h
}
