#include<iostream>
#include<format>

using namespace std;

/*
unsigned long factorial(unsigned long k){
    if (k==1) return 1;
    return k * factorial(k-1);
}

int main(){
    unsigned long k {5};
    cout << format("Factorial of {} is {}", k, factorial(k));
}
*/

int factorial(int k){
    if (k==1) return 1;
    return k * factorial(k-1);
}



int main(){
    int k {5};
    cout << format("Factorial of {} is {}", k, factorial(k));
}

/*
Output:
    Factorial of 5 is 120
*/