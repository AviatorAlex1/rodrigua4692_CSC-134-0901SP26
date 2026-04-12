// CSC 134
// M4HW1 - GOLD
// Rodrigua4692
// 23 MAR 2026

#include <iostream>
using namespace std;

int main() {
    int number;

    // Gold: input validation loop
    do {
        cout << "Enter a number from 1 to 12? ";
        cin >> number;
    } while (number < 1 || number > 12);

    // Silver/Bronze: print the times table
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}