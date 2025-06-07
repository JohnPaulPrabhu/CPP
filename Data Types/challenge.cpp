#include<iostream>
#include<format>

using namespace std;

struct catalog_card{
    const char* Title {};
    const char* Author {};
    const char* Publisher {};
    const char* Subject {};
    const char* ISBN {};
    const char* worldCat {};
    short int dd1 {};
    short int dd2 {};
    short int year_publication {};
    short int year_acquired {};
    short int quantity {};
};

int main(){
    catalog_card book {
        "The CGI Book", "William E. Weinman", "New Riders",
        "CGI (Computer network protocol)",
        "1562055712 9781562055714", "477166381",
        510, 78, 1996, 1997, 2
    };
    auto* pb = &book;
    // cout << format("Values are: {}", book);
    cout << format("Title: {}\n", pb->Title);
    cout << format("Author: {}\n", pb->Author);
    cout << format("Publisher: {}\n", pb->Publisher);
    cout << format("Subject: {}\n", pb->Subject);
    cout << format("ISBN: {}\n", pb->ISBN);
    cout << format("WorldCat (OCLC): {}\n", pb->worldCat);
    cout << format("Dewey Decimal: {}.{}\n", pb->dd1, pb->dd2);
    cout << format("Year published: {}\n", pb->year_publication);
    cout << format("Year acquired: {}\n", pb->year_acquired);
    cout << format("Quantity: {}\n", pb->quantity);
}