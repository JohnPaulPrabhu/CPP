#include<iostream>
#include<format>

using namespace std;

/*
This is called interface
   - Interface will be in a separate .h file 
   - And the implementation will be in a cpp file
*****************************
class Test{
    int Val {};
public:
    void setVal(int newVal);
    int getValue();
};
*****************************
*/

class Test{
    int Val {};
public:
    void setVal(int newVal);
    int getValue();
};

// Best practce is to define the functions outside of the class and declare it inside of the class
void Test::setVal(int newVal) {
    Val=newVal;
}
int Test::getValue() { 
    return Val;
}

int main(){
    Test t;
    t.setVal(333);
    cout<<format("Checking the assigned value: {}", t.getValue());
}