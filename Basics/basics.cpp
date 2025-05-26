#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: " << endl;
    // If you want to read a single char, then you can simply use cin >> name. 
    // But if you want to read a line, then you have to use getline function.
    getline(cin, name);
    cout << "Hello, " << name << endl;
    int n = 10;
    string a = "John";
    // std::string name = "John";
    cout << n << " " << a <<endl;

    // This is just a error statement used to print the error statement
    cerr << "This is the example error message" << endl;
}