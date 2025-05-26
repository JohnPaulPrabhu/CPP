#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    float num = -10.39;

    // abs() functions returns the absolute value of the given number
    cout << "Value of l: " << num << endl << "Absolute value of l: " << abs(num) << endl;

    // pow(x, y) takes two argument and returns the x to the power of y
    cout << "Testing pow: " << pow(num,2) << endl;

    // round() function will round off the number to its nearest.
    // if the decimal is greater than 0.5 then, it will round off the original number to its next integer
    // if the decimal number is lesser than 0.5, then it will round off to its original integer number
    cout <<"Original number: " << num << endl <<"Rounding off the number: " << round(num) <<endl;

    // round the original floating number to its next integer number
    cout << "Floor number of num: " << floor(num)<<endl;

    // round the original floating number to its original integer number
    cout << "Ceil of numn: " << ceil(num) << endl;

    // sqrt() with calculate the square root of the given number
    cout << "Square root of num: " << sqrt(4) << endl;

    // if i used the log(x), then it uses the natural logarithm
    // if i use the log10(x), then it calculates the base 10 logarithm
    cout << "Log of 10: " << log10(10)<<endl;

    // min(x,y) will return the minimum between two values
    cout << "Finding min value between 10,40: " << min(10,40)<<endl;

    // max(x,y) will return the maximum between two values
    cout << "Finding max value between 10,40: " << max(10,40)<<endl;

}