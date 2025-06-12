#include<iostream>
#include<format>

using namespace std;

/*
 - Both class and struct follows the similar structure.
 - Only difference is struct initialize the variables with pubic specifier
 - And class initialize it with the private specifier
*/

class A{
    // If you don't specify it as public, you cannot access it from outside of the class
    public:
        int a {};
        int b {};
        int c {};
};

struct B{
    // Since struct by default declare the variable as public, you can directly access it
    int a {};
    int b {};
    int c {};
};

class Test{
    int t1 {};
    int t2 {};
    int t3 {};
    public:
        /*
            Below construtor details
            Test(int a, int b, int c) -> constructor definition which takes 3 inputs
            t1(a), t2(b), t3(c) -> Initializers
            {} -> Function code block
        */
        Test(int a, int b, int c) : t1(a), t2(b), t3(c) {}
        
        // Since the values are private, we need setter and getter to set and get the values
        // That is also one of the reason, we need constructor
        void seta(int a){ t1=a;}
        void setb(int b){ t2=b;}
        void setc(int c){ t3=c;}
        int geta(){ return t1;}
        int getb(){ return t2;}
        int getc(){ return t3;}
};

int main(){
    A a1(1,2,3);
    cout<<format("Value of a is {}, b is {} and c is {}\n", a1.a, a1.b, a1.c);
    B b1(1,2,3);
    cout<<format("Value of a is {}, b is {} and c is {}\n", b1.a, b1.b, b1.c);

    Test t {3, 33, 333};

    cout<<format("Value of t1 is {}, t2 is {} and t3 is {}\n", t.geta(), t.getb(), t.getc());
}