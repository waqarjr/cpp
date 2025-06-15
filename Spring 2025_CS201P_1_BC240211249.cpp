#include <iostream>
using namespace std;

int main() {
    int hours;
    int fee = 0;
    string name = "MUHAMMAD ABDULLAH";
    string vuID = "BC240422491";
    cout << "Enter the number of hours you spent at the gym: ";
    cin >> hours;3
    if (hours <= 0) {
        cout << "Invalid input! Please enter a positive number of hours." << endl;
    } else {
        if (hours == 1) {
            fee = 0; 
        } else {
            fee = (hours - 1) * 200;
        }
        cout << "Total gym usage fee Rs. " << fee << endl;
    }

    return 0;
}
