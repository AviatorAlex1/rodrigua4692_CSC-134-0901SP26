/*
CSC 134
Rodriguea4692
9 MAR 2026
Simple Spades Card Game - AI Assisted Development
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to generate a random card (1-13)
int drawCard() {
    return rand() % 13 + 1;
}

int main() {

    int playerCard;
    int computerCard;
    char playAgain = 'y';

    srand(time(0));

    cout << "Welcome to Simple Spades!" << endl;

    while (playAgain == 'y') {

        playerCard = drawCard();
        computerCard = drawCard();

        cout << endl;
        cout << "You draw: " << playerCard << endl;
        cout << "Computer draws: " << computerCard << endl;

        if (playerCard > computerCard) {
            cout << "You win the trick!" << endl;
        }
        else if (playerCard < computerCard) {
            cout << "Computer wins the trick." << endl;
        }
        else {
            cout << "It's a tie!" << endl;
        }

        cout << endl;
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}