#include <iostream>
#include <format>

using namespace std;

int main(){
    int arr[3] {1,2,3};

    for(const int& i:arr){
        cout << format("Value is {}\n", i);
    }
    for (int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        cout<<format("Pring the value again {}\n", arr[j]);
    }
    cout << format("Size of array {} and size of first element {}\n", sizeof(arr), sizeof(arr[0]));

    // We can also use the pointer to access the elements
    int* ptr = arr;
    size_t size = sizeof(arr)/sizeof(arr[0]);
    int init=0;
    while(init!=size){
        cout << format("value in the pointer is {}\n", *ptr);
        ptr++;
        init++;
    }


}