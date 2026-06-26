#include<iostream>
using namespace std;

int max(int a,int b){
    if (a>b)
    {
        return a;
    }
    else
    return b;
}

void agepara(int age){
    if (age>18)
    {
        cout<< "you are eligible\n";
    }
    else
    cout<<"fuckoff bby\n";
    
}

int increment(int a1, int b1){
    cout << ++a1*b1++;
}

int main(){
//    int result = max(100,150);
//    cout << result;

for (int age = 0; age < 20; age++)
{
    agepara(age);
}

int ak = 5;
int bk = 6;

increment(ak,bk);

}


