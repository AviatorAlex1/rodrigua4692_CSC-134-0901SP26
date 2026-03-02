// CSC 134
// M2LAB
// Rodrigua4692
// 02 MAR 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
//Variables
const double COST_PER_CUBIC_FOOT = 0.23; 
const double CHARGE_PER_CUBIC_FOOT = 0.5;

double length,
    width,
    height,
    volume,
    cost,
    charge,
    profit;

cout << setprecision(2) << fixed << showpoint;

// Have the user enter the crate dimensions.
cout << "enter the dimensions of the crate (in feet): \n";
cout << "Length:  ";
cin >> length;
cout << "Width:  ";
cin >> width;
cout << "Height:  ";
cin >> height;

// Calculate the Crate Volume, and cost to produce it.
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume *CHARGE_PER_CUBIC_FOOT;
profit = charge - cost; 

// Display the calculate data
cout << "The volume of the crate is ";
cout << volume << " cubic feet. \n";
cout << "cost to build:  $" << cost << endl;
cout << " Charge to customer: $" << charge << endl;
cout << "Profit:  $" < profit << endl;
return 0;
}