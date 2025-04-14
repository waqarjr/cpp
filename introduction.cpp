#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

//  Basic I/O

// cin and cout is used to input and output data
// endl is used to print a new line

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

// Escape characters 
// \n is used to print a new line
// \t is used to print a tab


//  Variables and Data Types
// int, float, double, char, bool 
// int is used to store integer values e.g. int age = 20;
// float is used to store floating point values e.g. float price = 9.99;
// double is used to store floating point values e.g. double gpa = 3.5;
// char is used to store characters e.g. char grade = 'A';
// bool is used to store boolean values e.g. bool isStudent = true;

// const is used to declare a constant variable e.g. const int MAX_STUDENTS = 100;

// Operators
// Arithmetic (+, -, *, /, %)

// Relational (==, !=, <, >, <=, >=)

// Logical (&&, ||, !)

// Assignment (=, +=, -=, etc.)

// Increment/Decrement (++, --)

// Bitwise (&, |, ^, ~, <<, >>)

// Ternary (condition ? true : false)


// Control Flow
// if, else if, else
// switch, case
// for, while, do while
// break, continue, return

int a = 10;

    switch (a) {
        case 1:
            cout << "a is 1" << endl;
            break;
        case 2:
            cout << "a is 2" << endl;
            break;
        default:
            cout << "a is not 1 or 2" << endl;
    }   

int whileloop = 10;
while (whileloop > 0) {
    cout << "loop is " << whileloop << endl;
    whileloop--;
}

int forloop = 10;
for (int i = 0; i < forloop; i++) {
    cout << "loop is " << i << endl;
}   

int doWhileloop = 10;
do {
    cout << "loop is " << doWhileloop << endl;
    doWhileloop--;
} while (doWhileloop > 0);

int i = 0;
while (i < 10) {
    if (i == 5) {
        break;
    }
    cout << "loop is " << i << endl;
    i++;
}   

return 0;
}


