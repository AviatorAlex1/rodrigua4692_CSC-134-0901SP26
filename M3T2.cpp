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
    int seed;
    cout << "What is your LUCKY number? " << endl;
    cin >> seed;

    srand(seed);

    const int MAX = 6;
    int roll = rand() % MAX;

    cout << "Your First roll was: " << roll << endl;
    cout << "and your Second Roll was: " << rand() % MAX;
    cout << " and the Third Roll was: " << rand() % MAX; 

    cout << endl;
    return 0;
}
