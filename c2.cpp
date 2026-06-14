#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
using namespace std;

int main() {
    // You can use almost anything without individual includes
    
    // Strings
    string name = "Alice";
    
    // Vectors
    vector<int> numbers = {5, 2, 8, 1, 9};
    
    // Sorting
    sort(numbers.begin(), numbers.end());
    
    // Math
    cout << "Square root of 25: " << sqrt(25) << endl;
    
    // Maps
    map<string, int> scores;
    scores["Alice"] = 95;
    scores["Bob"] = 87;
    
    // Set
    set<int> uniqueNums = {1, 2, 2, 3, 3, 3};
    
    // Queue
    queue<int> q;
    q.push(10);
    
    // Output
    cout << "Name: " << name << endl;
    cout << "Sorted numbers: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}