#include <iostream>

using namespace std;

/*
1. This file contains example implementation of if else and switch statement
2. Switch doesn't support string, we have to give int
3. Ternary Operator (?:)
*/

int main(){
    int a = 10;
    int b=154;
    // std::cin >> b;
    cout << "Value of a is: " << a << endl;
    if (b > 10) {
        cout << "The value is greater than 10: The value is " << b << endl;
    }
    else if(b > 5){
        cout << "The value is not greater than 10 but greater than 5";
    }
    else{
        cout <<"The value is not greater than 10 or 5";
    }

    int day = 3;

    switch(day){
        case 1:
            cout << "Today is Sunday";
            break;
        case 2:
            cout << "Today is Monday";
            break;
        default:
            cout << "The day you mentioned is invalid" << endl;
            break;
    }

    int age = 5;
    string status = (age > 18) ? "Major" : "Minor";
    cout << "This person is "<< status;

}