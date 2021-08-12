// This program will give you the average of three grades

// Alberto Conde
// September 10, 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Please input the first grade\n";
    float grade1;
    cin >> grade1;
    cout << "\nPlease input the second grade\n";
    float grade2;
    cin >> grade2;
    cout << "\nPlease input the third grade\n";
    float grade3;
    cin >> grade3;
    float average;
    average = (grade1+grade2+grade3)/3.0;
    cout << "\nThe average of the three grades is " << setprecision(2) << fixed << average << endl;
    return 0;
}
