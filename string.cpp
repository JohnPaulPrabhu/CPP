#include<iostream>
#include  <string>
#include <algorithm>
using namespace std;

int main(){
    // unlike char which can store only one character or word, string can store the entire sentence.
    string s = "String";
    cout <<s<<endl;
    
    // Printing the length of the string
    // Both length and size
    cout <<"Found length of string using str.length(): " << s.length()<<endl;
    cout << "Found length of string using str.size(): " << s.size() <<endl;

    // We can also make the string to lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << "Transforming the string to lowercase: "<< s << endl;

    // We can also make the string to lower case
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Transforming the string to upper case: " << s << endl;

    // We can also make the string to lower case
    return 0;
}