#include <iostream>
// #include<format>

using namespace std;

int func(){
    // Static saves the value in memory. Static variable doesn't initialize the value again and again
    static int x {9};
    return x++;
}

int main()
{
    // when you declare a variable const, it becomes immutable. You can never change its value 
    const int i {10};

    cout << "Printing the value of i: " << i <<endl;
    cout << "Printing the value of func(): " << func() <<endl;
    cout << "Printing the value of func(): " << func() <<endl;
    cout << "Printing the value of func(): " << func() <<endl;
    /*
    Output from above
    Printing the value of i: 10
    Printing the value of func(): 9
    Printing the value of func(): 10
    Printing the value of func(): 11

    The func returns the value with updated value each time
    Because static store the value in memory. It doesn't initialize each time it gets called
    That's why we are getting new value each time func() been called
    */

}