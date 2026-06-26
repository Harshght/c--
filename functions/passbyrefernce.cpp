#include <bits/stdc++.h>
using namespace std;

void hello(int &age){
  ++age;
}
int main(){
    int year = 17;
    hello(year);
    cout<<year;
}
