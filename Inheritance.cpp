#include<iostream>
#include<string>

using namespace std;

class person {
    public:
    string name;
    int age;
    
    person() {
        cout << "person constructor" << endl;
    }
    
    person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    ~person() {
        cout << "person destructor" << endl;
    }
};
class Student : public person {
    public:
    int rollNo;

    Student(string name , int age, int rollNo) :person( name, age) { 
        cout << "Student constructor" << endl;
        this->rollNo = rollNo;
    }   
    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Age: " << age << endl;
        cout<< "Roll No: " << rollNo << endl;
    }
    ~Student() {
        cout << "Student destructor" << endl;
    }
};

int main(){
Student P1("John", 30, 101);

P1.getInfo();
return 0;
}