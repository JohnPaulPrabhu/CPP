#include<iostream>
#include<format>

using namespace std;

int main(){
    // When array of characters initialized in this way, the last character will be null pointer
    // const char s[] {"String"};

    // We can also initialize this way
    const char s[] {'S','t', 'r', 'i', 'n', 'g', 0};

    for(auto& c:s){
        // Adding the check to see if the last character is a null character.
        if (c) cout<<format("Printing each character: {}\n", c);
    }

    // We can also use the pointer to do the same
    const char* t {"String"};
    for(auto* p=t;*p;p++){
        // Adding the check to see if the last character is a null character.
        cout<<format("Printing each character: {}\n", *p);
    }
}