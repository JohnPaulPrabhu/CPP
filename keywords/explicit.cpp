#include<iostream>

using namespace std;

class Meter{
    public:
        // explicit Meter(double m): m_(m) {}
        Meter(double m): m_(m) {}
        double m_;
};

void printMeter(Meter m){
    cout<<m.m_<<endl;
}

int main(){
    /*
        Explicit conversion
        Here we are explicitly calling the Meter constructer,
        So while calling "printMeter" function, it cannot convert the value to match up with the class type
        By default it should match
    */
    Meter m{5};
    printMeter(m);

    /*
        implicit conversion, this line will throw an error if Meter set as explicit
        "\explicit.cpp:21:16: error: could not convert '10' from 'int' to 'Meter'"
        if we don't mention the explicit keyword, "printMeter" implicitly convert the value to match up with the class type
    */
    printMeter(10);
}