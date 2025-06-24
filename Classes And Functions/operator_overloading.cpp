#include<iostream>
#include<format>
#include<string>

using namespace std;

string nanstr {"NaN"};


class Rational{
    int d;
    int n;
    public:
        Rational(int numerator=0, int denominator=1):d(denominator), n(numerator){}
        Rational(const Rational& rhs):n(rhs.n),d(rhs.d){}
        ~Rational();
        int numerator() const {return n;}
        int denominator() const {return d;}
        Rational find_GCD() const; // Finding the greatest common devisor
        string str() const;
        string raw_str() const;
        Rational& operator = (const Rational&); // Assignment
};

Rational Rational::find_GCD() const{
    if(n==0 || d<=3) return *this;
    for(int div=d-1;div;--div){
        if(d%div == 0 && n%div==0){
            return Rational(n/div, d/div);
        }
    }
    return *this;
}

string Rational::str() const{
    if(d==0) return nanstr;
    if(n==0 || d <=3) return to_string(n);
    auto abs_n = abs(n);
    // cout << format("{} and {}\n", n, d);
    if(abs_n>d){
        auto whole = abs_n/d;
        auto reminder = abs_n%d;
        if(reminder) return to_string(whole) + " " + Rational(reminder,d).str();
        else return to_string(whole);
    }
    else{
        return find_GCD().raw_str();
    }
}

string Rational::raw_str() const{
    return to_string(n) + "/" + to_string(d);
}

Rational operator + (const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.denominator() + lhs.denominator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}

Rational operator - (const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.denominator() - lhs.denominator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}

Rational operator * (const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.numerator()*rhs.numerator(), lhs.denominator()*rhs.denominator());
}

Rational operator / (const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.numerator() * rhs.denominator(), lhs.denominator() * rhs.numerator());
}

Rational::~Rational() = default;

int main(){
    Rational a(10,8);
    cout<< format("The value of a is {}", a.str()) << "\n";

    Rational b(4,8);
    cout<< format("The value of b is {}", b.str()) << "\n";

    Rational c(3,8);
    cout<< format("The value of c is {}", c.str()) << "\n";

    Rational d = a+b;
    cout<< format("The value of d is {}", d.str()) << "\n";

    Rational e = a-b;
    cout<< format("The value of e is {}", e.str()) << "\n";

    Rational f = a*b;
    cout<< format("The value of f is {}", f.str()) << "\n";

    Rational g = a/b;
    cout<< format("The value of g is {}", g.str()) << "\n";
    
    Rational h = a + 10;
    cout << format("The value of h is {}", h.str()) << "\n";

    Rational i = 10 + a;
    cout << format("The value of i is {}", i.str()) << "\n";

}

/*
Outputs:
    The value of a is 1 1/4
    The value of b is 1/2
    The value of c is 3/8
    The value of d is 1 3/4
    The value of e is 3/4
    The value of f is 5/8
    The value of g is 2 1/2
    The value of h is 11 1/4
    The value of i is 11 1/4
*/