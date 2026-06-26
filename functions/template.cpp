#include <iostream>
using namespace std;

// 1. Tell the compiler this is a template with placeholder 'T'
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    // 2. Use it with ints
    cout << multiply<int>(5, 10) << endl;       // Output: 50

    // 3. Use it with doubles
    cout << multiply<double>(5.5, 2.0) << endl; // Output: 11
    
    // 4. Let the compiler deduce it automatically!
    cout << multiply(3.14f, 2.0f) << endl;      // Deduces T to be float

    return 0;
}