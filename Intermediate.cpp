#include <iostream>
#include <algorithm>
using namespace std;

 // functions
 // function declaration
// int add(int a, int b)
   
// function definition
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int inline add2(int a, int b) {
    return a + b;
}
int add3(int a, int b = 0) {
    return a + b;
}
// Recursion
// Recursion is a feature in C++ that allows you to call a function from within itself.
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // function call
    int result = add(5, 3);
    cout << "The result of the addition is: " << result << endl;    
// function overloading
// function overloading is a feature in C++ that allows you to have multiple functions with the same name but different parameters.
    int result2 = add(5, 3, 2);
    cout << "The result of the addition is: " << result2 << endl;    

// Inline functions
// Inline functions are a feature in C++ that allows you to inline a function.

   int result3 = add2(5, 3);
   cout << "The result of the addition is: " << result3 << endl;    

// Default arguments
// Default arguments are a feature in C++ that allows you to assign a default value to a parameter.

int result4 = add3(5, 3);
cout << "The result of the addition is: " << result4 << endl;    

int result5 = factorial(5);
cout << "The result of the factorial is: " << result5 << endl;  

// Array
// Array is a feature in C++ that allows you to store a fixed size sequence of elements of the same type.

int arr[5] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
    cout << "The element at index " << i << " is: " << arr[i] << endl;
}

// 2d Array 
// 2d Array is a feature in C++ that allows you to store a fixed size sequence of elements of the same type in a 2D grid.

int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "The element at index " << i << " and " << j << " is: " << arr2[i][j] << endl;
    }
}
 // Array manipulation (sorting, searching)

// Sorting
// Sorting is a feature in C++ that allows you to sort an array.
 

int arr3[5] = {19, 4, 3, 2, 1};

sort(arr3, arr3 + 5);

for (int i = 0; i < 5; i++) {
    cout << "The element at index " << i << " is: " << arr3[i] << endl;
}

// Strings
// Strings are a feature in C++ that allows you to store a sequence of characters.

string str = "Hello, World!";

cout << "The string is: " << str << endl;

// String manipulation (concatenation, substring, length)

string str2 = "Hello, World!";

string str3 = str + str2;

cout << "The concatenated string is: " << str3 << endl; 

// Substring
// Substring is a feature in C++ that allows you to extract a substring from a string.

string str4 = str.substr(0, 5);

cout << "The substring is: " << str4 << endl;

// Length
// Length is a feature in C++ that allows you to find the length of a string.

int length = str.length();

cout << "The length of the string is: " << length << endl;

// char arrays (C-style strings)

char str5[10] = "Hello";

cout << "The string is: " << str5 << endl;

// pointers
// pointer is a variable that stores the memory address of another variable.
// int* ptr; // ptr is a pointer to an integer

    int x = 10;        // normal variable
    int* ptr = &x;     // pointer variable stores address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores address: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl; // dereferencing

    // Dynamic memory allocation
    // Dynamic memory allocation is a feature in C++ that allows you to allocate memory dynamically.

int* ptr1 = new int;        // allocate memory for 1 int
*ptr1 = 25;                 // assign value
cout << "Value: " << *ptr1 << endl;
delete ptr1;                // free the memory

// Structures
// Structures are a feature in C++ that allows you to store a collection of variables of different types under a single name.

struct Person {
    string name;
    int age;
};  

Person p1;
p1.name = "John";
p1.age = 20;

cout << "Name: " << p1.name << endl;
cout << "Age: " << p1.age << endl;

// Nested structures
struct Address {
    string street;
    string city;
    string state;
    int zip;
}; 

struct Person2 {
    string name;
    int age;
    Address address;
}; 

Person2 p2;
p2.name = "John";
p2.age = 20;
p2.address.street = "123 Main St";
p2.address.city = "Anytown";
p2.address.state = "CA"; 

cout << "Name: " << p2.name << endl;
cout << "Age: " << p2.age << endl;
cout << "Street: " << p2.address.street << endl;
cout << "City: " << p2.address.city << endl;
cout << "State: " << p2.address.state << endl;

    return 0;   
}








