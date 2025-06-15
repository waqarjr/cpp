#include<iostream>
#include<string>
using namespace std;

class person {
    public:
    string name;
    int age;
};

class student  {
    public:
    int rollNo;
};

// single inheritance
// class graStudent : public student {
//     public:
//     string researchTopic;


//     void getInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Research Topic: " << researchTopic << endl;
//     }
// };

// multiple graStudent 

class graStudent : public student, public person {
    
};

int main(){

    graStudent s1;
    s1.name = "tony stark";
    s1.age = 30;
    s1.rollNo = 101;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollNo << endl;
    return 0;
}