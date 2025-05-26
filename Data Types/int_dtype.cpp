#include <iostream>
#include <cstdint>
#include <format>
#include <cstdio>


using namespace std;

void singed_integers();
void unsinged_integers();
void fixed_size_integers();

string line = "===============================";

int main(){
    singed_integers();
    unsinged_integers();
    fixed_size_integers();
}

void singed_integers(){
    cout << format("{}\n", line);
    cout <<"singed_integers         " << endl;
    cout << format("{}\n", line);
    int a = 10;
    short int b = 20;
    long int c = 30;
    long long int d = 40;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << format("{}\n", line);
}
void unsinged_integers(){
    cout <<"unsinged_integers         " << endl;
    cout << format("{}\n", line);
    unsigned int a = 10;
    short int b = 20U;
    unsigned long int c = 30;
    unsigned long long int d = 40;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << format("{}\n", line);
}

void fixed_size_integers(){
    cout <<"fixed_size_integers         " << endl;
    cout << format("{}\n", line);
    /*
    Sometimes the compiler thinks uint8_t as unsigned char.
    if you don't cast it, You will get 'd' as output.
    Or else you can do any of the following to get the int value
    This happens only with uint8_t and int8_t. Because they are typically aliased to unsigned char and char 
    
    cout << format("Value of a is {}\n", a);
    cout << static_cast<int>(a) << endl;
    cout << +a << endl;
    cout << 0+a << endl;
    printf("%u\n", a);
    */
    uint8_t a = 100;
    uint16_t b = 10000;
    uint32_t c = 1000000;
    uint64_t d = 100000000;
    cout << format("Value of uint8_t is {}\n", a);
    cout << format("Value of uint16_t is {}\n", b);
    cout << format("Value of uint32_t is {}\n", c);
    cout << format("Value of uint64_t is {}\n", d);
    // If any of the values are exceeded

    cout << format("{}\n", line);
}
