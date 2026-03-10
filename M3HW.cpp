/*
CSC 134
M3HW - GOLD
rodrigua4692
9 MAR 2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Question 1

    // Q1 Variables
    string choice;
    
    // Q1 Meat and Potatoes of the function
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    cin >> choice;

    if (choice == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (choice == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }
    // Q1 FIN.


    // Question 2

    // Q2 variables
    string meal_name = "Hawaiian Calzone";
    int num_meals; 
    double meal_price;                 // now entered by user
    double sub_total; 
    double tax_rate = 0.08; 
    double tip_amount = 0;
    double tip_rate = 0.15;            // 15% tip
    double tax_amount;                 
    double total_price;                
    int order_type;                    // 1 = dine in, 2 = takeaway

    //User input
    cout << "Welcome to Alex's Pizza Spot " << endl;
    cout << "Today's special: " << meal_name << endl;
    cout << endl;

    cout << "Enter the price of the meal: $";
    cin >> meal_price;

    cout << "How many would you like? : ";
    cin >> num_meals;

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> order_type;

    // Do math things
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate;

    // Tip only for dine in customers
    if (order_type == 1) {
        tip_amount = sub_total * tip_rate;
    }

    total_price = sub_total + tax_amount + tip_amount;

    // Show the results and da money!
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "Your Order:" << endl << "--------------------------------" << endl;
    cout << num_meals << " X " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "--------------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl;
    cout << "Thank you for dining with us!" << endl; 
    
    // Q2 FIN.
    return 0;
}