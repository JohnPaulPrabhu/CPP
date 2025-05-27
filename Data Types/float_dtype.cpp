// #include<iostream>
import <iostream>;
#include<format>

/*
Command to compile the package to import
g++ -std=c++23 -fmodules-ts -c -x c++-system-header iostream
Command to run the imported package
g++ -std=c++23 -fmodules-ts  .\float_dtype.cpp -o .\float_dtype.exe; .\float_dtype.exe
*/
using namespace std;

int main(){
    // Float will have 32-bit precision
    float f=1.01;

    // double has 64-bin precision
    double ff = 1.000000000000001;

    // long has dependencies on system. It usually 128-bit, but personal PC supports only 64bit
    long double fff = 1.000000000000001;

    const size_t byte {8};

    cout << format("Printing the float value: {}\n", f);
    cout << format("Printing the size of float value: {}\n", sizeof(f) * byte);
    cout << format("Printing the double value: {}\n", ff);
    cout << format("Printing the size of double value: {}\n", sizeof(ff) * byte);
    cout << format("Printing the long double value: {}\n", fff);
    cout << format("Printing the size of long double value: {}\n", sizeof(fff) * byte);


    // There is a catch in adding floating value
    double check=0.1;

    cout << format("Value is {}", check+check+check);
}