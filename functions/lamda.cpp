#include <bits/stdc++.h>
using namespace std;

int main(){
    char me = 'a';
    auto func = [&me](){
        cout << me << "hello";
    };

    func();
    return 0;
}

