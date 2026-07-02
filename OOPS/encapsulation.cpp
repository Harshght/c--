//encapsulation.cpp

#include <bits/stdc++.h>
using namespace std;

class car{
    public:
    string model;
    int year;
    int price;
    int mileage;
    
    void displayCarInfo(){
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
    private:
    string engineType;
    string originCountry;


    //example of encapsulation
    void setEngineType(string type){
        engineType = type;
    }
    void setOriginCountry(string country){
        originCountry = country;
    }   

    // void displayInfo(){
    //     cout << "Engine Type: " << engineType << endl;
    //     cout << "Origin Country: " << originCountry << endl;
    // }

    
};
int main(){

    car myCar;
    myCar.model = "Toyota";
    myCar.year = 2020;
    myCar.price = 25000;
    myCar.mileage = 15000;
  
    myCar.displayCarInfo();
    return 0;
}
