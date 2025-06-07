#include <iostream>
#include <typeinfo>
#include <vector>
#include <format>

using namespace std;

int main(){
    string s = "This is a string";
    int a = 10;
    auto k = a;
    cout << "Value of k is "<< k << endl;
    cout << "Dtype of k is "<< typeid(k).name()  << endl;
    // cout << format("Value of k is {}", k);
    cout << "Value of s is " << s <<endl;
    cout << "Dtype of s is " << typeid(s).name() <<endl;

    vector<int> vi {1,2,3,4,5};
    for(vector<int>::iterator it = vi.begin(); it != vi.end(); it++){
        cout << "The value is " << *it <<endl;
    }
    cout<< format("*********************************\n");
    for(auto it = vi.begin(); it != vi.end(); it++){
        cout << "The value is " << *it <<endl;
    }

    return 0;
}