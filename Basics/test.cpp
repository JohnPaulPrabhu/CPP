#include <iostream>
#include <vector>
#include <format>
using namespace std;

int main()
{
    int x = 45;
    vector<string> msg{"Hello", "C++", "World"};
    // msg.
    auto str = format("Value of x is {}\n",x);
    cout<<str;
    cout<<"Chekcing\n";
    cout<<"chec";
    int i = 10;
    
    cout << format("The value of i is {}\n", ++i);
    
    cout << format("The value of i is {}\n", i++);
}
