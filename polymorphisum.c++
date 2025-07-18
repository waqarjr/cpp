#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    // Person(){
    //     cout<<"this is a default ";
    // }
    // Person(string firstPerson) {
    //     this->firstPerson = firstPerson;
    //     cout << "this is a parameterized constructor" << endl;
    // }

//     void show(char c) {
//         cout << "character: " << c << endl;
//     };

//     void show(string s) {
//         cout << "string: " << s << endl;
//     };
void getInfo(){
    cout << "parent class" << endl;
}

virtual  void fun(){
    cout << "Parent fun" << endl;
}

};

class student : public Person {
   public:
    void getInfo() {
        cout << "Child class" << endl;
    }
    void fun() {
        cout << "Child fun" << endl;
    }

};

int main(){
    student s1;
    s1.fun(); // calls the first show method
    // n1.show("Hello"); // calls the second show method
    return 0;
}