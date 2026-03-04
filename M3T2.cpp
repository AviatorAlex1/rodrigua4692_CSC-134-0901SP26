 // CSC 134
// M3T2
// Rodrigua4692
// 02 MAR 2026

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main ()
{
    cout << "Let's roll some Dice!" << endl;
    int seed = time(0);
    //cout << "Your Seed is: " << seed << endl;
    //cout << "What is your LUCKY number? " << endl;
    //cin >> seed;

    srand(seed);

    const int MAX = 6;
    int roll1, roll2, total;
    roll1 = (rand() % MAX) + 1;
    cout << "Your First roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "and your Second Roll was: " << roll2 << endl;

    total = roll1 + roll2; 

    cout << "Your total roll is: " << total << endl;

    //Craps
    //7 and 11 = WIN!!
    //2 and 12 = GAME OVER!!!

    if (total == 7){
        cout << "lucky seven! You win!" << endl; 
    }
    else if (total == 11) {
        cout << "Eleven is a Winner!" << endl;
    }   
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == 3) {
        cout << "Sorry, Three is unluckly, You lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else { 
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }

    cout << endl;
    return 0;
}
