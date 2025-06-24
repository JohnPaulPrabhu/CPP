#include<iostream>
#include<format>

using namespace std;

class Test1 {
    int val {};
    public:
    void setVal  (int k){ val = k;}

    /*
        We can create 2 functions with the same name but the difference constant specifier
        So when you invoke the function with the specifier, same type of the functions will get triggered
    */
    int getVal() const {
        cout<< "Const specifier gets invoked\n";
        return val;
    }
    int getVal() {
        cout<< "without specifier gets invoked\n";
        return val;
    }
};

class Test2 {
    // If you set the value to be mutable, then even with the const obect we can set the value
    mutable int val {};
    public:
        void setVal(int k) const { val = k;}
        int getVal() const {return val;}
};


int main(){

    Test1 t;
    t.setVal(333);
    cout<<format("{}\n",t.getVal());
    const Test1 t1=t;
    // After making the object to const, we can't assign any value to it
    // t2.setVal(333);
    cout<<format("Value pesent in the Test1 Class is {}\n", t1.getVal());

    Test2 tt;
    tt.setVal(333);
    const Test2 t2;
    // After making the object to const, we can't assign any value to it
    t2.setVal(3333);
    cout<<format("Value pesent in the Test2 Class is {}\n", t2.getVal());
}