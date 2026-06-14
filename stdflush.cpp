#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout << "Downloading file: ";
    
    for (int i = 0; i < 5; i++) {
        cout << "[#]" << flush; // Forces each '#' to appear on screen instantly
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    
    cout << " Complete!" << endl;
    return 0;
}