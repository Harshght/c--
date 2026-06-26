// all about strings 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << str << endl;

    // String concatenation
    string str1 = "Hello";
    string str2 = "World";
    string result = str1 + ", " + str2 + "!";
    cout << result << endl;

    // String length
    cout << "Length of result: " << result.length() << endl;

    // Accessing characters
    cout << "First character: " << result[0] << endl;
    cout << "Last character: " << result[result.length() - 1] << endl;

    // Substring
    string substring = result.substr(7, 5); // Extract "World"  

    string strin = "HELLO";
    string *ptr = &strin;
    cout << ptr << endl;
    cout << *ptr << endl;

    string strr;
     strr = "ke re";
    string& alias = strr;
                                
    alias ="haa ree";
    cout << strr << endl ;
    return 0;
}