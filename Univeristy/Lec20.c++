#include <iostream>
#include <string>
using namespace std;

class test {
    public:
    int arr[10];
    test(){
        for(int i = 0; i < 10; i++){
            arr[i] = i + 2; 
        }
    }
    // Overloading Subscript [] Operator
    int &operator[](int index) {
        if(index > 9){
            cout << "Index out of bounds, returning last element." << endl;
            return arr[9];
        } else {
            return arr[index];
        }
    }
};

// Overloading Function () operator 
// Must be a member function 
// Any number of parameters can be specified 
// Any return type can be specified 
// Operator() can perform any generic operation 

class Lect20 {
    int age ;
    string name;
    public:
    Lect20(){
        age = 20;
        name = "Lecture";
    }
    Lect20(int a, string n) {
        age = a;
        name = n;
    }
    Lect20 operator ()(int a , string n) {
       Lect20 obj;
       obj.age = a;
       obj.name = n;
       return obj;
    }
    void display() {
        cout << "Age: " << age << ", Name: " << name << endl;
    }
};

class negation {
    int num;
    public:
    negation(){
        num = 0;
    }
    negation(int n) {
        num = n;
    }
    // Overloading unary - operator
    negation operator-() {
        num = -num;
        return negation(num);
    }
    
    void display() {
        cout << "Number: " << num << endl;
    }
};

class increment {
    int num;
    public:
    increment(){
        num = 0;
    }
    increment(int n) {
        num = n;
    }
    // Overloading unary ++ operator
    increment operator++() {
        increment temp;
        temp.num = ++num; // Pre-increment
        return temp;
    }
    increment operator--() {
        increment temp;
        temp.num = --num; // Pre-decrement
        return temp;
    }
    void display() {
        cout << "Number: " << num << endl;
    }
};

class PostIncrement {
    int num;
    public:
    PostIncrement() {
        num = 0;
    }
    PostIncrement(int n) {
        num = n;
    }    
    // Overloading unary ++ operator for post-increment
    PostIncrement operator++(int) {
        PostIncrement number;
        number.num = num++; // Pre-decrement
        return number;
    }
    // Overloading unary -- operator for post-decrement
    PostIncrement operator--(int) {
        PostIncrement number;
        number.num = num--; // Post-decrement
        return number;
    }
    
    void display() {
        cout << "Number: " << num << endl;
    }
};

int main(){
    test t1;
    cout<<t1[0]<<endl;
    cout<<t1[5]<<endl;
    cout<<t1[11]<<endl;

    Lect20 l1(23,"liaquat"),l2;
    l1.display();
    l2 = l1(30, "Ali");
    l2.display();

    negation n1(5), n2(-19);
    -n1;
    n1.display();
    -n2;
    n2.display();

    increment inc1(10);
    increment inc2 = ++inc1; // Pre-increment
    inc2.display();
    inc1 = --inc2; // Pre-decrement
    inc1.display();

    PostIncrement postinc1(10);
    PostIncrement postinc2 = postinc1++; // Post-increment
    postinc2.display();
    postinc1 = postinc2--; // Post-decrement
    postinc1.display();
/*
When we move high data type to low data type, we lose the data.
For example, if we move double to int, we lose the decimal part.
When we move low data type to high data type, we don't lose the data.
long double -> double -> float -> long -> int -> short -> char
*/
    return 0;
}