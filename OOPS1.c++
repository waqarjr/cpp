#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    double* gpaPtr; 

Student(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        gpaPtr = new double; // dynamically allocate memory for gpa
        *gpaPtr = gpa; // assign the value to the allocated memory 
    }
Student(const Student &s) {
        cout << "Copy constructor called" << endl;
        this->name = s.name;
        this->age = s.age;
        gpaPtr = new double; 
        *gpaPtr = *s.gpaPtr; 
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", GPA: " << *gpaPtr << endl;
    }
~Student(){// this is also called destructor
    cout<<"this is a destructor";
}
};


int main(){
    Student student1("Alice", 20, 3.8);
    Student  student2(student1);
    student1.displayInfo();
    *(student2.gpaPtr) = 2.9; 
    student2.displayInfo();
    return 0;
}