#include<iostream>
#include<format>

using namespace std;

bool check_prime(int num){
    for (int init=2; init<num;init++){
        if (num % init == 0) return false;
    }
    return true;

}

int main(){
    int num = 2;
    int prime =100;
    bool check;
    for (int i=2;i<prime;i++){
        check=check_prime(i);
        if (check){
            cout<<i<<" ";
        }
    }

}