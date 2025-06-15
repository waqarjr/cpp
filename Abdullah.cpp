#include <iostream>
#include <string>
using namespace std;

int main() {
	// Hardcoded name and VU ID
	string name = "Muhammad Farid Iqbal";
	string vuID = "bc240435749";

	cout << "Name: " << name << endl;
	cout << "VU-ID: " << vuID << endl;

	// Asking user to input numeric part
	string numericPart;
	cout << "\nEnter numeric part of VU-ID: ";
	cin >> numericPart;

	// Extracting middle five digits
	string middleFive = numericPart.substr(2, 5);
	cout << "\nExtracted Middle Five Digits: " << middleFive << endl;

	// Prices
	int priceBurger = 250;
	int pricePizza = 500;
	int priceFries = 150;
	int priceSandwich = 200;
	int priceColdDrink = 100;

	// Quantities from extracted digits
	int qtyBurger = middleFive[0] - '0';
	int qtyPizza = middleFive[1] - '0';
	int qtyFries = middleFive[2] - '0';
	int qtySandwich = middleFive[3] - '0';
	int qtyColdDrink = middleFive[4] - '0';

	cout << "\n=== Welcome to C++ Cafe ===\n";
	cout << "------ MENU ------\n";
	cout << "1. Burger	- Rs. " << priceBurger << endl;
	cout << "2. Pizza 	- Rs. " << pricePizza << endl;
	cout << "3. Fries 	- Rs. " << priceFries << endl;
	cout << "4. Sandwich  - Rs. " << priceSandwich << endl;
	cout << "5. Cold Drink- Rs. " << priceColdDrink << endl;

	// Calculating subtotals
	int subtotalBurger = qtyBurger * priceBurger;
	int subtotalPizza = qtyPizza * pricePizza;
	int subtotalFries = qtyFries * priceFries;
	int subtotalSandwich = qtySandwich * priceSandwich;
	int subtotalColdDrink = qtyColdDrink * priceColdDrink;

	// Display each item's billing
	cout << "\nBurger (" << qtyBurger << " x Rs. " << priceBurger << ") = Rs. " << subtotalBurger << endl;
	cout << "Pizza (" << qtyPizza << " x Rs. " << pricePizza << ") = Rs. " << subtotalPizza << endl;
	cout << "Fries (" << qtyFries << " x Rs. " << priceFries << ") = Rs. " << subtotalFries << endl;
	cout << "Sandwich (" << qtySandwich << " x Rs. " << priceSandwich << ") = Rs. " << subtotalSandwich << endl;
	cout << "Cold Drink (" << qtyColdDrink << " x Rs. " << priceColdDrink << ") = Rs. " << subtotalColdDrink << endl;

	// Calculating total
	int totalBeforeDiscount = subtotalBurger + subtotalPizza + subtotalFries + subtotalSandwich + subtotalColdDrink;
	float discount = 0;
	float netAmount = totalBeforeDiscount;

	if (totalBeforeDiscount >= 5000) {
    	discount = totalBeforeDiscount * 0.10;
    	netAmount = totalBeforeDiscount - discount;
    	cout << "\nSurprise! You've unlocked a 10% discount\n";
	}

	cout << "\n==== Final Bill ====\n";
	cout << "Total before discount: Rs. " << totalBeforeDiscount << endl;
	cout << "Discount: Rs. " << discount << endl;
	cout << "Net Payable Amount: Rs. " << netAmount << endl;

	cout << "\nThank you for visiting C++ Cafe!" << endl;

	return 0;
}