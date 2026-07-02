#include <bits/stdc++.h>
using namespace std;
//classs creation
class student{
   public:
    int age;
    string name;
    bool attendence;

    //constructor

    student(){
        cout<<"object initialising mera kaam "<<endl;
    }

    student(int myage, int std,string myname){
        age = myage ;
        name = myname;
        std = std;

        cout << "param constructror working success";
        

    }
};

class Animal {
public:
    void sleep() { std::cout << "Zzz"<<endl; }
};
//Inside main(): Animal myAnimal; ✅ Works perfectly!
int main(){

    //object creation

     //static way
     student s1;
     //student k;
     student s(10,12,"harsh");

    //dynamic way

  // -->  student *s = new student();
    
    Animal mine;
    mine.sleep();

    
    
    
}
