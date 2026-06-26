//one defination rule 

#include<iostream>
using namespace std;
//variable : decleqar
double add(double a, double b){
    return (a+b);
}
struct onedefinationrule
{
    double m_x;
    double m_y;
};


int main(){
    
    
    double h = 3;
    double j = 8;

    double result = add(h, j);
    cout << "result\n" << result << endl;    
    
    return 0;
}