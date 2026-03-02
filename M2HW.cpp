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


    //Variables


}