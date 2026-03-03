// CSC 134
// M2HW - Gold
// Rodrigua4692
// 02 MAR 2026

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
   // This helps print values with 2 decimal places (0.00)
    cout << fixed << setprecision(2);

   // Question 1 – Banking Transactions
   cout << "Question 1 - Banking Program" << endl;

   string name;
   double StartingBalance;
   double DepositAMT;
   double WithdrawlAMT;
   double FinalBalance;

   cout << "Enter your Full Name (First Last): ";
   getline(cin, name);

   cout << "Enter starting balance:  ";
   cin >> StartingBalance;

   cout << "Enter deposit amount: ";
   cin >> DepositAMT;

   cout << "Enter withdrawl amount: ";
   cin >> WithdrawlAMT; 

   FinalBalance = StartingBalance + DepositAMT - WithdrawlAMT;
   int AccountNumber = 000234567; 
   
   cout << "\nAccount Information" << endl;
   cout << "Name: " << name << endl;
   cout << "Account Number: " << AccountNumber << endl;
   cout << "Final Balance: $" << FinalBalance << endl;
   cout << endl;

//----------------------------------------------------------------
//Q2 
//Variables
    const double COST_PER_CUBIC_FOOT = 0.30; 
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

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
    cout << "Profit:  $" << profit << endl;

}