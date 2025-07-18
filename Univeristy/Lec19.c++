#include <iostream>
#include <string>
using namespace std;

class Test {
public:
string name;
int age;
    // Test (){
    //     name = "Test Object";
    // }
    friend istream& operator>>(istream& is, Test& t) {
        cout << "Enter name:  & Enter age: ";
        is >> t.name;
        is >> t.age;
        return is;
    }
    // insertion operator overload as a friend function
    friend ostream& operator<<(ostream& os, Test& t) {
        os << "Name: " << t.name;
        os << "Age: " << t.age;
        return os;
    }
};


int main() {
    // Stream insertions operators

    // Friend function
// Declared inside the class with friend keyword.
// Defined outside the class.
// Not a member function, so it does not use this pointer.
// Can access private and protected members of the class.
Test t1;
cin >> t1; // Calls the overloaded insertion >> operator

cout << t1 << endl;
return 0;
}