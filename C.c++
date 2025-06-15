# include <iostream>

using namespace std;

class Animal {
    private:
    string name,
    int age,
    public:
    Animal(string n, int a){
        name = n,
        age = a,
    }
    void display (){
       cout << "Name: " << name << ", Age: " << age << endl;
    }
    virtual void speak() { // Virtual for runtime polymorphism
        cout << name << " makes a sound." << endl;
    }
}

class Dog : public Animal {
    public:
    Dog(string name , int a) : Animal (n ,a ) {}
    
}