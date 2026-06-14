//use of setfill() function
#include<iostream>  
#include<iomanip> // This header is included to use the setfill() function, which allows us to specify a fill character for output formatting.
using namespace std; // This line allows us to use the standard library functions and objects without needing
// to prefix them with 'std::'
int main(){
    cout << setfill('*') << setw(10) << 42 << endl; // This line uses the setfill() function to specify that the fill character should be '*' and the setw() function to set the width of the output to 10 characters. The number 42 will be right-aligned within this width, and the remaining space will be filled with '*'.
    return 0;
}
