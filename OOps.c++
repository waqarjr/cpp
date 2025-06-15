#include <iostream>
#include <string>
using namespace std;

class Teacher {
    
// Access specifier
// private members are not accessible outside the class
// public members are accessible outside the class
// protected members are accessible in derived classes

private:
    double salary;
public:
 // data members/ properties
    string name;
    string subject;
    string department;
// without parameterized constructor
//     Teacher (){
// }
// with parameterized constructor
    Teacher (string name, string subject , string department) {
        this->name = name;
        this->subject = subject;
        this->department = department;
    }
   // copy constructor
    Teacher (const Teacher &t) {
        cout << "Copy constructor called" << endl;
        this->name = t.name;
        this->subject = t.subject;
        this->department = t.department;
    }

    // methods / members functions
    void setDepartment(string dep) {
        department = dep;
    }
    // setter for salary
    void setSalary(double sal) {
        salary = sal;
    }

    // getter for salary
    double getSalary() {
        return salary;
    }
    void getInfo(){
        cout << "name  : " <<name << endl;
        cout << "department : " << department << endl;
    }

};
// four major piller of oops 
// 1. Encapsulation
// is a wraoping of data and methods into a single unit (class).
// 2. Abstraction
// 3. Inheritance
// 4. Polymorphism

class bankAccount {
private:
    double balance;
    double showbalance;
public:
    string accountNumber;
    string userName;

    void setbalance(double bal) {
        balance = bal;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    Teacher t1("John Doe", "Mathematics", "Science");
    // t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    // t1.name = "John Doe"; 
    // t1.subject = "Mathematics";
    // t1.setSalary(60000.0); // This will work as setSalary is public
    // cout << t1.department << endl;
    // cout << t1.getSalary() << endl;
    // cout << t1.name << endl;
    // cout << t1.subject << endl;

    // bankAccount b1;
    // b1.setbalance(1000.0); 
    // cout<< b1.getBalance(); 


    return 0;
}