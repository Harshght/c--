#include <iostream>
using namespace std;

int main() {
    // sizeof returns the size in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of int in bits: " << sizeof(int) * 8 << " bits" << endl;
    return 0;
}