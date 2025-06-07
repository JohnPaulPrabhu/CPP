#include<iostream>
#include<format>

using namespace std;

struct S{
    int a {};
    int k {};
    /*
        const char c[];
        We can't use this here, because C++ does not allow incomplete array types
        Only exception is you manually manage memory, which is not safe or standard in C++ for this case.
    */
    const char* c {};
};

int main(){
    S s {3,33,"String"};
    cout << format("{}, {}, {}\n", s.a, s.k, s.c);

    // Using below pointer method, we can updae the struct values
    auto* sp= &s;
    sp->a=33;
    sp->k=333;
    sp->c="Checkin";
    cout << format("{}, {}, {}\n", s.a, s.k, s.c);
}



// Below code is used to allocate the memory for array


/*
#include <iostream>
#include <cstring>  // for memcpy
using namespace std;

struct S {
    int a;
    int k;
    const char c[];  // Flexible array member
};

int main() {
    const char* text = "Hello";
    size_t len = strlen(text);

    // Allocate enough memory for struct + char array + null terminator
    S* s = (S*) malloc(sizeof(S) + len + 1);  // C-style allocation

    s->a = 1;
    s->k = 2;
    memcpy((void*)s->c, text, len + 1);  // Copy the string into the flexible array

    cout << "a: " << s->a << ", k: " << s->k << ", c: " << s->c << endl;

    free(s);  // Don't forget to free the memory
    return 0;
}
*/