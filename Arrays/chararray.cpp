//array of character

#include<iostream>
using namespace std;

int main(){
    char arr[] = "HelloWorld";
    cout << "Size of the character array: " << sizeof(arr) -1  << endl; //-1 for "" in helloworld // Subtract 1 to exclude the null terminator
   
   char msg[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // declaring and initializing a character array
  // cout << "Size of the character array msg: " << sizeof(msg) << endl;
   for(auto c : msg){
    cout << c;
   }
   
//    int nums[] = {1, 2, 3, 4, 5};
//    cout << nums << endl; 
   
    return 0;
}