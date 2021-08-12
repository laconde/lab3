// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

// Alberto Conde
// September 10, 2020

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float price1, price2;        // The price of 2 items
    int    quantity1, quantity2;    // The quantity of 2 items

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the price and quantity of the first item " << endl;
    cin >> price1 >> quantity1;
    cout << "\nPlease input the price and quantity of the second item " << endl;
    cin >> price2 >> quantity2;
    cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
    cout << setw(15) << price1 << setw(12) << quantity1 << endl;
    cout << setw(15) << price2 << setw(12) << quantity2 << endl;

    return 0;
}
