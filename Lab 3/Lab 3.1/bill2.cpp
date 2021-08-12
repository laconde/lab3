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

    cout << setprecision(2) << showpoint;    // formatted output
    cout << "Please input the number of items bought" << endl;
    cin >> quantity;
    cout << "Please input the price of each item\n";
    cin >> itemPrice;
    totalBill = quantity * itemPrice;
    cout << "The total bill is $" << totalBill << endl;
    return 0;
}
// By eliminating the fixed attribute, the number is printed in scientific notation
