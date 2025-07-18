#include <iostream>
using namespace std;

// Abstract Base Class
class LibraryMember {
protected:
    int memberId;
    string memberName;
    double membershipFee;

public:
    LibraryMember(int id, string name) : memberId(id), memberName(name), membershipFee(0.0) {}

    virtual void calculateMembershipFee() = 0;   // Pure virtual
    virtual void displayDetails() const = 0;     // Pure virtual

};

// Student Member Class
class StudentMember : public LibraryMember {
private:
    double baseFee;
    double discount;

public:
    StudentMember(int id, string name, double baseFee, double discount)
        : LibraryMember(id, name), baseFee(baseFee), discount(discount) {}

    void calculateMembershipFee() override {
        membershipFee = baseFee - discount;
    }

    void displayDetails() const override {
        cout << "\nStudent Member Details:\n";
        cout << "ID: " << memberId << "\nName: " << memberName << endl;
        cout << "Base Fee: " << baseFee << "\nDiscount: " << discount << endl;
        cout << "Final Membership Fee: " << membershipFee << endl;
    }

};

// Faculty Member Class
class FacultyMember : public LibraryMember {
private:
    double baseFee;
    double facilityFee;

public:
    FacultyMember(int id, string name, double baseFee, double facilityFee)
        : LibraryMember(id, name), baseFee(baseFee), facilityFee(facilityFee) {}

    void calculateMembershipFee() override {
        membershipFee = baseFee + facilityFee;
    }

    void displayDetails() const override {
        cout << "\nFaculty Member Details:\n";
        cout << "ID: " << memberId << "\nName: " << memberName << endl;
        cout << "Base Fee: " << baseFee << "\nFacility Fee: " << facilityFee << endl;
        cout << "Final Membership Fee: " << membershipFee << endl;
    }

};

// Main Function
int main() {
    // Create dynamic array of base class pointers
    LibraryMember* members[2];

    // Create StudentMember and FacultyMember objects
    members[0] = new StudentMember(1, "Ali", 5000, 1000);
    members[1] = new FacultyMember(2, "Dr. Ahmed", 7000, 2000);

    // Polymorphic behavior
    for (int i = 0; i < 2; i++) {
        members[i]->calculateMembershipFee();
        members[i]->displayDetails();
    }

    // Clean up
    for (int i = 0; i < 2; i++) {
        delete members[i];
    }

    return 0;
}
