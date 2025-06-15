#include<iostream>
#include<string>
using namespace std;

class name {
    public:
    string firstName;
    name(){
        cout<<"this is a default ";
    }
    name(string firstName) {
        this->firstName = firstName;
        cout << "this is a parameterized constructor" << endl;
    }

};

int main(){
    name n1("tony");

    return 0;
}