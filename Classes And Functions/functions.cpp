#include<iostream>
#include<format>
#include<string>

using namespace std;

// If you assing a default value, the while calling the function 
// even if you don't specify the value, it will take the default value
void func(int k=100){
    cout<<format("Value of k is {}\n", k);
}

void func(int k, int l){
    cout<<format("Value of k is {} and l is {}\n", k, l);
}

void func(int* p){
    cout<<format("value of p in call by reference is {}\n", *p);
}

void static_func(int a){
    static auto i = a;
    /*
        i = 20;
        if you assign a new value for static variable i, it will take the new value
        
        static auto i = a;
        But if you re-initialize it, then it will check the memory for the value then update it
    */
    cout << format("value of i is {}\n", ++i);
}

const string& check_string(int k){
    static string s = format("Value of passed integer is {}", k);
    return s;
}

int main(){
    int a = 10;
    int b = 100;

    // This is the example of call by value
    func(a);
    func();
    func(a, b);

    // This is the example of call by reference
    func(&a);

    // This is the example of call by value with static variable
    static_func(10);
    static_func(10);
    static_func(10);
    static_func(10);

    // reutnring the value as refenrece
    const auto& s=check_string(99);
    cout<<format("{}\n", s);
}

/*
Outputs:
    Value of k is 10
    Value of k is 100
    Value of k is 10 and l is 100
    value of p in call by reference is 10
    value of i is 11
    value of i is 12
    value of i is 13
    value of i is 14
    Value of passed integer is 99
*/