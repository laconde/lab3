// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Alberto Conde
// September 10, 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int    quantity;        // contains the amount of items purchased
    float itemPrice;    // contains the price of each item
    float totalBill;    // contains the total bill.

    cout << setprecision(4) << fixed << showpoint;    // formatted output
    cout << "Please input the number of items bought" << endl;
    cin >> quantity;
    cout << "Please input the price of each item\n";
    cin >> itemPrice;
    totalBill = quantity * itemPrice;
    cout << "The total bill is $" << totalBill << endl;
    return 0;
}
// By increasing setprecision to 4, it prints out 4 decimal places. The attribute showpoint forces all floating point output to show a decimal point even if the values are whole numbers. In some environments this is done automatically.
