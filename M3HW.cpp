/*
CSC 134
M3HW - GOLD
rodrigua4692
9 MAR 2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

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


    return 0;
}