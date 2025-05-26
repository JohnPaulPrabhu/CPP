#include<iostream>
#include<string>
#include<format>
using namespace std;

int add(int a, int b);
void whil(int i);
void do_while(int i);
void character(string ch);

int main(){
    /*
    int k = 10;
    for(int i=1; i<k;i++){
        cout<<i<<endl;
    }
    */
    // character("Checking");
    // whil(1);
    // do_while(10);
    int arr [] {1,2,3,4,5};
    int i;
    cout << sizeof(arr)<<endl<<sizeof(arr[0]) << endl;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << format("the {}th element in array is {}", i, arr[i]) << endl;
    }
    
}

int add(int a,int b){
    return a+b;
}

void whil(int i){
    while(i<10){
        cout<<"Checking the current number: "<<i<<endl;
        cout<<"Checking the addition of current numbers: "<< add(i,i)<<endl;
        i++;
    }
}

void character(string ch){
    for(char c:ch){
        cout<<c<<endl;
    }
}

void do_while(int i){
    do{
        cout<<"Checking the current number: "<<i<<endl;
        i--;
    }while(i!=0);
}