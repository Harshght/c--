//array of character

#include<iostream>
using namespace std;

int main(){
    char arr[] = "Hello, World!";
    cout << "Size of the character array: " << sizeof(arr) - 1 << endl; // Subtract 1 to exclude the null terminator
   
   char msg[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // declaring and initializing a character array
  // cout << "Size of the character array msg: " << sizeof(msg) << endl;
   for(auto c : msg){
    cout << c;
   }
   
   
   
    return 0;
}