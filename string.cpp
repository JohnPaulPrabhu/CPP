#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <format>
#include <sstream>
using namespace std;

int main(){
    // unlike char which can store only one character or word, string can store the entire sentence.
    string s = "String";
    cout <<s<<endl;
    
    /* Printing the length of the string
       Both length and size */
    cout << "Found length of string using str.length(): " << s.length() << endl;
    cout << "Found length of string using str.size(): " << s.size() <<endl;

    // We can also make the string to lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << "Transforming the string to lowercase: "<< s << endl;

    // We can also make the string to lower case
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "Transforming the string to upper case: " << s << endl;

    /* str.find():
    To find a word or letter in string
    If the pattern matches with the string, then it will return the starting index
    Otehrwise it will return -1 

    size_t vs int
    =============
    - Generally we use int to store the integer values
    - But here, we are using size_t. Because most of the time, when calculating the szie or count
    - best practice is to use the size_t instead of int. Mostly size_t is 64 bit, while int is 32 bit
    - And size_t accepts only positive values */
    size_t index = s.find("TR");
    cout << "Starting Index of the letter: " << index << endl;
    
    /*
    str.replace
    - We will using regular expression library for it
    - 
    */
    // using namespace std::format;
    string st = "Checking the replace function to replace the values";
    string new_st = regex_replace(st, regex("replace"), "regex");
    cout <<new_st<<endl;

    /*
    Splitting the string
    */
    string check = "Checking the split function";
    vector<string> words;
    istringstream iss(check);

    for(string word; iss >> word;){
        words.push_back(word);
    }
    for(string word : words){
        cout << word << endl;
    }

    // Join the strings
    vector<string> list = {"Hello", "World!"};
    ostringstream os;
    for(int i=0;i<list.size();++i){
        if (i > 0) os << " ";
        os << list[i];

    }
    string combined_text = os.str();
    cout << combined_text << endl;

    return 0;
}