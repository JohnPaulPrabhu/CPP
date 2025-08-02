#include<iostream>
#include<string>

using namespace std;

/*
  - Polymorphic function calls need "virtual" in base class.
  - The "override" keyword in C++ is not mandatory for overriding virtual functions, but 
    it's highly recommended because it helps catch mistakes during compilation.
*/

class Animals{
    public:
        virtual void speak() { 
            cout<<"Animal speaks\n";
        }
        void sound() { 
            cout<<"Animal sound\n";
        }
};

class Dog: public Animals{
    public:
        void speak() override { cout<<"Dog speaks\n";}
        void sound() { cout<<"Dog sound\n";}
};

int main(){
    Animals* a = new Dog();
    a->speak();
    a->sound();
}