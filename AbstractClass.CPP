#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
protected:
    double baseRate;
    double taxRate;

public:
    Vehicle(double baseRate, double taxRate) {
        this->baseRate = baseRate;
        this->taxRate = taxRate;
    }

    virtual double getBaseRate() const {
        return baseRate;
    }

    virtual double calculateTaxes() const = 0;           // Pure virtual
    virtual double calculateTotalCost() const = 0;       // Pure virtual

    virtual ~Vehicle() {}
};

// Normal Car
class NormalCar : public Vehicle {
public:
    NormalCar(double baseRate) : Vehicle(baseRate, 0.15) {} // 15% taxRate

    double calculateTaxes() const override {
        return taxRate * baseRate;
    }

    double calculateTotalCost() const override {
        return baseRate + calculateTaxes();
    }
};

// Luxury Car
class LuxuryCar : public Vehicle {
private:
    double eduty;

public:
    LuxuryCar(double baseRate) : Vehicle(baseRate, 0.20), eduty(30000) {} // 20% taxRate + 30000 Eduty

    double calculateTaxes() const override {
        return taxRate * baseRate + eduty;
    }

    double calculateTotalCost() const override {
        return baseRate + calculateTaxes();
    }
};

// Main Function
int main() {
    Vehicle* car1 = new NormalCar(100000);   // Normal Car with baseRate = 100000
    Vehicle* car2 = new LuxuryCar(200000);   // Luxury Car with baseRate = 200000

    cout << "Normal Car Total Cost: " << car1->calculateTotalCost() << endl;
    cout << "Luxury Car Total Cost: " << car2->calculateTotalCost() << endl;

    // Clean up
    delete car1;
    delete car2;

    return 0;
}
