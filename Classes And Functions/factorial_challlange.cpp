#include<iostream>
#include<format>

using namespace std;

int main(){
    int k {5};

    int ans=1;
    for(int i=1; i<=k;i++){
        ans*=i;
    }

    cout << format("Factorial of {} is {}", k, ans);
}