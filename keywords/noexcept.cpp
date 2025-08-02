#include<iostream>
#include<string>
using namespace std;

/*
    - noexcept promises the function won’t throw exceptions.
    - If you throw an exception inside a noexcept function, the program will call std::terminate() immediately (your catch will not run), and the program will abort.
    - You can use the try and catch inside the function, but you can't use the tru and catch calling that function
*/


class Check{
    public:
        void checking() noexcept {
            cout<<"Checking\n";
            // Below try and catch will work as it is even the functionis noexcept
            try{
                throw runtime_error("something went wrong");
            }
            catch(exception& e){
                cout<<"Caught the error: "<<e.what()<<endl;
            }
            // Below error will terminate the function because the function uses the noexcept keyword
            throw runtime_error("something went wrong");
        }
};

int main(){
    Check c;
    try{
        c.checking();
    }
    catch(const exception& e){
        cout<<"Checking the catch function "<< e.what()<<endl;
    }
    cout << "main: continuing after catch\n";
}