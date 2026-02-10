// CSC 134
// M2T1
// Rodrigua4692
// 09 FEB 2026

// Checkout 
#include <iostream>
using namespace std;

int main() {
//Apple Orchard
// Set up Variables
    string first_name, last_name, full_name; //Customer's name
    string product = "apples"; 
    double costs_each = 0.25; //Cost per apple 
    double total_cost; //Total cost
    
    //Greet the customer
    cout << "Welcome to our " << product << " store! " << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Hello, " << full_name << "! Nice to meet you!" << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
//Calculate the total price of the apples
    double totalPrice = apples * pricePerApple;
    cout << "If you want them all, that will be $" << totalPrice<< endl;
    
    cout << endl;
    return 0;