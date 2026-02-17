/*
CSC 134
M2T2 - Reciept Calculator
rodrigua4692
16 FEB 2026
Reciept Printer

*/

#include <iostream>
using namespace std;

int main(){
    //variables
    string meal_name = "Hawiian Calzone";
    int     num_meals; 
    double meal_price = 8.99;//Change
    double sub_total; 
    double tax_rate = 0.08; 
    double tip_amount;
    double tax_amount;                  // Total of the actual tax charged
    double total_price;                 //meal + tip + tax

    //User input
    cout << "welcome to _ ";
    cout << "Today's special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;

    
    // Do math things
    sub_total = meal_price * num_meals;

    // Show the results 
    cout << "Your Order:" << endl << "--------------------------------" << endl;
    cout << num_meals << " X " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;



    return 0;
}