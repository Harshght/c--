#include <bits/stdc++.h>
using namespace std;

// area of a circle
double area(double r) {
    return 3.14 * r * r;
}

int main() {
    double r;

    // take input
    cin >> r;

    // display output
    cout << "Radius = " << r << endl;
    cout << "Area of Circle = " << area(r);

    return 0;
}