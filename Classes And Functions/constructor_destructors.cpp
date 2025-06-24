#include<iostream>
#include<format>
#include<string>

using namespace std;

string unk {"unknown"};
string clone_ {"clone-"};

class Animal{
    string name {};
    string type {};
    string sound {};
    public:
        Animal(); // Default constructor
        Animal(const string& t, const string& n,const string& s); // Constructor with arguments
        Animal(const Animal&); // Copy constructor
        ~Animal();
        Animal& operator = (const Animal&); // Copy/Assignment operator
        void print() const;
};

Animal::Animal():name(unk), type(unk), sound(unk) {
    cout<<"Default constructor invoked\n";
}

Animal::Animal(const string& t, const string& n, const string& s):name(n), type(t), sound(s) {
    cout<<"Constructor with arguments invoked\n";
}

Animal::Animal(const Animal& a){
    name = clone_ + a.name;
    type = a.type;
    sound = a.sound;
    cout<<"Copy constructor invoked\n";
}

Animal::~Animal(){
    cout<<format("Destructor: {} the {}\n", name, type);
}

Animal& Animal::operator = (const Animal& o){
    cout << "Assignment operator\n";
    if (this != &o){
        name = clone_+o.name;
        type = o.type;
        sound = o.sound;
    }
    return *this;
}

void Animal::print () const{
    cout<<format("{} the {} says {}\n", name,type,sound);
};

int main(){
    Animal a;
    a.print();

    Animal b("Dragon", "Lucifer", "Grrrrr");
    b.print();

    Animal c(b);
    c.print();

    a = c;
    a.print();
}