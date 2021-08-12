// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Alberto Conde
// September 10, 2020

#include <iostream>
#include <iomanip>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
    float batAvg;

    batAvg = HITS / (float) AT_BAT;                                    // an assignment statement
    cout << "The batting average is " << setprecision(6) << batAvg << endl;    // output the result

    return 0;
}

