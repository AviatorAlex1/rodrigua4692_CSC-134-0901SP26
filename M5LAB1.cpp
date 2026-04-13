// CSC 134
// M5LAB1
// Rodrigua4692
// 30 MAR 2026

#include <iostream>
using namespace std;

//functions
void main_menu();
void choice_join_empire();
void choice_join_rebellion();
void choice_back_door();
void choice_go_home();
void choice_fight_vader();
void choice_use_force();

int main() {
    cout << "==================================" << endl;
    cout << "  STAR WARS: A GALAXY DIVIDED" << endl;
    cout << "==================================" << endl;
    cout << "You are a young pilot on Tatooine." << endl;
    cout << "A hooded stranger approaches you..." << endl;
    cout << endl;
    main_menu();
    return 0;
}

// ---- MAIN MENU ----
void main_menu() {
    int choice = 0;

    while (choice < 1 || choice > 4) {
        cout << "What do you do?" << endl;
        cout << "1. Join the Rebellion" << endl;
        cout << "2. Join the Empire" << endl;
        cout << "3. Sneak through the back door" << endl;
        cout << "4. Go home and forget everything and let some guy named Skywalker take on this endeavor..." << endl;
        cout << "Enter choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            choice_join_rebellion();
        } else if (choice == 2) {
            choice_join_empire();
        } else if (choice == 3) {
            choice_back_door();
        } else if (choice == 4) {
            choice_go_home();
        } else {
            cout << "Invalid choice. Try again.\n" << endl;
        }
    }
}

// ---- BRANCH 1: JOIN REBELLION ----
void choice_join_rebellion() {
    cout << endl;
    cout << "You follow the stranger to a hidden base." << endl;
    cout << "It's the REBEL ALLIANCE! Princess Leia briefs you." << endl;
    cout << "\"We need your help. Darth Vader is closing in.\"" << endl;
    cout << endl;

    int choice = 0;
    while (choice < 1 || choice > 2) {
        cout << "What do you do?" << endl;
        cout << "1. Grab a lightsaber and fight Vader" << endl;
        cout << "2. Use the Force to guide your ship" << endl;
        cout << "Enter choice (1-2): ";
        cin >> choice;

        if (choice == 1) {
            choice_fight_vader();
        } else if (choice == 2) {
            choice_use_force();
        } else {
            cout << "Invalid choice. Try again.\n" << endl;
        }
    }
}

// ---- BRANCH 2: JOIN EMPIRE ----
void choice_join_empire() {
    cout << endl;
    cout << "You board a Star Destroyer and are given a stormtrooper" << endl;
    cout << "helmet. Darth Vader himself walks past." << endl;
    cout << "\"Your aim had better be better than the others,\" he says." << endl;
    cout << endl;

    int choice = 0;
    while (choice < 1 || choice > 2) {
        cout << "What do you do?" << endl;
        cout << "1. Pledge your loyalty to the Empire" << endl;
        cout << "2. Secretly contact the Rebellion" << endl;
        cout << "Enter choice (1-2): ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "You rise through the Imperial ranks." << endl;
            cout << "Years later, you command your own Star Destroyer." << endl;
            cout << "The galaxy trembles at your name... but at what cost?" << endl;
            cout << "\n*** ENDING: THE IMPERIAL PATH ***" << endl;
        } else if (choice == 2) {
            cout << endl;
            cout << "You slip a message to Rebel spies." << endl;
            cout << "They extract you during a hyperspace jump." << endl;
            cout << "Han Solo greets you: \"Gutsy move, kid. Welcome aboard.\"" << endl;
            cout << "\n*** ENDING: THE DOUBLE AGENT ***" << endl;
        } else {
            cout << "Invalid choice. Try again.\n" << endl;
        }
    }
}

// ---- BRANCH 3: BACK DOOR ----
void choice_back_door() {
    cout << endl;
    cout << "You slip through a hidden passage and find..." << endl;
    cout << "R2-D2! The little droid beeps urgently and projects" << endl;
    cout << "a holographic map leading to Luke Skywalker." << endl;
    cout << endl;
    cout << "You deliver R2 to the Rebellion." << endl;
    cout << "The Death Star plans are recovered. Hope is restored." << endl;
    cout << "\n*** ENDING: UNLIKELY HERO ***" << endl;
}

// ---- BRANCH 4: GO HOME ----
void choice_go_home() {
    cout << endl;
    cout << "You head back to your moisture farm." << endl;
    cout << "But when you arrive, Imperial troops are there." << endl;
    cout << "They've destroyed everything. You have nothing left to lose." << endl;
    cout << "You turn around and go find that stranger..." << endl;
    cout << "\n*** ENDING: DESTINY CALLS ***" << endl;
}

// ---- SUB-BRANCH: FIGHT VADER ----
void choice_fight_vader() {
    cout << endl;
    cout << "You ignite your lightsaber and face Darth Vader." << endl;
    cout << "The room goes silent. He tilts his helmet." << endl;
    cout << "\"Impressive. Most impressive.\"" << endl;
    cout << "You hold your ground... and he steps back." << endl;
    cout << "The Rebellion erupts in cheers." << endl;
    cout << "\n*** ENDING: THE FORCE IS STRONG WITH YOU ***" << endl;
}

// ---- SUB-BRANCH: USE THE FORCE ----
void choice_use_force() {
    cout << endl;
    cout << "You close your eyes and feel the Force flow through you." << endl;
    cout << "Your X-Wing weaves perfectly through the Death Star trench." << endl;
    cout << "You fire. Two seconds later — BOOM." << endl;
    cout << "The Death Star is destroyed. You saved the galaxy." << endl;
    cout << "\n*** ENDING: TRUST IN THE FORCE ***" << endl;
}