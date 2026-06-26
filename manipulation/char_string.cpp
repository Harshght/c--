//character manipulation and strings
// C-string facilities are provided by the C++ standard library through the <cstring> header, which includes functions for manipulating null-terminated character arrays (C-strings). These functions allow you to perform operations such as copying, concatenation, comparison, and searching within C-strings. Additionally, C++ provides the std::string class in the <string> header, which offers a more convenient and safer way to work with strings compared to C-strings. The std::string class provides member functions for various string operations, including length retrieval, substring extraction, and character access. When working with strings in C++, it is important to choose the appropriate approach based on the specific requirements of your application, whether it be using C-strings for low-level manipulation or std::string for higher-level string handling.

#include <iostream>
#include <cstring> // For C-string functions
using namespace std;
int main() {
    // C-string example
    char cstr1[20] = "Hello";
    char cstr2[20] = "World";
    
    // Concatenating C-strings
    strcat(cstr1, " ");
    strcat(cstr1, cstr2);
    
    cout << "Concatenated C-string: " << cstr1 << endl; // Output: Hello World
    
    // Using std::string
    string str1 = "Hello";
    string str2 = "World";
    
    // Concatenating std::strings
    string result = str1 + " " + str2;
    
    cout << "Concatenated std::string: " << result << endl; // Output: Hello World
    // Comparing C-strings
    if (strcmp(cstr1, result.c_str()) == 0) {
        cout << "C-string and std::string are equal!" << endl; // Output: C-string and std::string are equal!
    } else {
        cout << "C-string and std::string are not equal!" << endl;
    }

    // Finding the length of a C-string
    cout << "Length of C-string: " << strlen(cstr1) << endl;
    // Finding the length of a std::string
    cout << "Length of std::string: " << result.length() << endl;
    // Accessing characters in a C-string
    cout << "First character of C-string: " << cstr1[0] << endl; // Output: H
    // Accessing characters in a std::string
    cout << "First character of std::string: " << result[0] << endl; // Output: H
   // Substring extraction from std::string
    string substring = result.substr(0, 5); // Extract "Hello"
    cout << "Substring of std::string: " << substring << endl; // Output: Hello
    // Searching for a character in a C-string
    char* found = strchr(cstr1, 'W');
    if (found) {
        cout << "Character 'W' found in C-string at position: " << (found - cstr1) << endl; // Output: Character 'W' found in C-string at position: 6
    } else {
        cout << "Character 'W' not found in C-string!" << endl;
    }
    // Searching for a substring in a std::string
    size_t pos = result.find("World");
    if (pos != string::npos) {
        cout << "Substring 'World' found in std::string at position: " << pos << endl; // Output: Substring 'World' found in std::string at position: 6
    } else {
        cout << "Substring 'World' not found in std::string!" << endl;
    }
    // Modifying a std::string
    result[0] = 'h'; // Change 'H' to 'h'
    cout << "Modified std::string: " << result << endl; // Output: hello
    // Note: Modifying a C-string directly can lead to undefined behavior if it exceeds the allocated size, so it's generally safer to use std::string for mutable strings.
    // C-strings are null-terminated, so we need to ensure that we do not exceed the allocated size when modifying them. In contrast, std::string manages its own memory and can grow dynamically as needed, making it a safer choice for string manipulation in C++.
    //check string is alphabetic
    string str3 = "Hello123";
    bool isAlpha = true;
    for (char c : str3) {
        if (!isalpha(c)) {
            isAlpha = false;
            break;
        }
    }
    if (isAlpha) {
        cout << "The string is alphabetic!" << endl;
    } else {
        cout << "The string is not alphabetic!" << endl; // Output: The string is not alphabetic!
    }
    //check string is numeric
    string str4 = "12345";
    bool isNumeric = true;
    for (char c : str4) {
        if (!isdigit(c)) {
            isNumeric = false;
            break;
        }
    }
    if (isNumeric) {
        cout << "The string is numeric!" << endl; // Output: The string is numeric!
    } else {
        cout << "The string is not numeric!" << endl;
    }
    //check string is alphanumeric
    string str5 = "Hello123";
    bool isAlphanumeric = true;
    for (char c : str5) {
        if (!isalnum(c)) {
            isAlphanumeric = false;
            break;
        }
    }
    if (isAlphanumeric) {
        cout << "The string is alphanumeric!" << endl; // Output: The string is alphanumeric!
    } else {
        cout << "The string is not alphanumeric!" << endl;
    }
    //check string is whitespace
    string str6 = "   ";
    bool isWhitespace = true;
    for (char c : str6) {
        if (!isspace(c)) {
            isWhitespace = false;
            break;
        }
    }
    if (isWhitespace) {
        cout << "The string is whitespace!" << endl; // Output: The string is whitespace!
    } else {
        cout << "The string is not whitespace!" << endl;
    }
    
    return 0;
}