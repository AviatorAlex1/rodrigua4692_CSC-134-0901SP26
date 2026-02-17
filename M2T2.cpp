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
    string meal_name = "Hawaiian Calzone";
    int     num_meals; 
    double meal_price = 5.99;//Change
    double sub_total; 
    double tax_rate = 0.08; 
    double tip_amount;
    double tax_amount;                  // Total of the actual tax charged
    double total_price;                 //meal + tip + tax

    //User input
    cout << "welcome to Alex's Pizza Spot " << endl;
    cout << "Today's special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? :";
    cin >> num_meals;
    cout << "Tip amount? (min 0)? :";
    cin >> tip_amount;

    
    // Do math things
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate;
    total_price = sub_total + tax_amount + tip_amount;
    // Show the results 
    cout << "Your Order:" << endl << "--------------------------------" << endl;
    cout << num_meals << " X " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t$" << tip_amount << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    cout << "Total: \t\t$" << total_price << endl;
    cout << "Thank you for dining with us!" << endl;



    return 0;
}