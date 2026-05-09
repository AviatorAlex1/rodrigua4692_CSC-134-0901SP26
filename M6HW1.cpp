// CSC 134
// M6HW1 - Project Prototype - GOLD
// Rodrigua4692
// 28 APR 2026


// Star Wars: A Galaxy Divided - Improved Version

#include <iostream>
using namespace std;

// Function prototypes
void intro();
void main_menu();
void rebel_base();
void empire_ship();
void back_door();
void moisture_farm();
void locked_hangar(bool hasCode);
void final_escape();
void bad_ending();

int getChoice(int min, int max);

int main() {
    intro();
    main_menu();
    return 0;
}

void intro() {
    cout << "=========================================\n";
    cout << " M6HW1: STAR WARS: A GALAXY DIVIDED\n";
    cout << "=========================================\n";
    cout << "You are a young pilot on Tatooine.\n";
    cout << "A hooded stranger approaches you with a warning:\n";
    cout << "\"The Empire is searching for a hidden Rebel access code.\"\n\n";
}

int getChoice(int min, int max) {
    int choice;
    cin >> choice;

    while (choice < min || choice > max) {
        cout << "Invalid choice. Enter a number from " << min << " to " << max << ": ";
        cin >> choice;
    }

    return choice;
}

void main_menu() {
    int choice;

    cout << "Where do you go first?\n";
    cout << "1. Rebel Base\n";
    cout << "2. Imperial Star Destroyer\n";
    cout << "3. Hidden Back Door Passage\n";
    cout << "4. Go Home\n";
    cout << "Enter choice: ";

    choice = getChoice(1, 4);

    if (choice == 1) {
        rebel_base();
    } else if (choice == 2) {
        empire_ship();
    } else if (choice == 3) {
        back_door();
    } else {
        moisture_farm();
    }
}

void rebel_base() {
    int choice;
    bool hasCode = false;

    cout << "\n--- ROOM 1: REBEL BASE ---\n";
    cout << "You enter a hidden Rebel base inside a canyon.\n";
    cout << "Princess Leia says, \"We need the Death Star access code to escape.\"\n";
    cout << "A mechanic points to a small data chip on a table.\n\n";

    cout << "What do you do?\n";
    cout << "1. Pick up the data chip\n";
    cout << "2. Ignore it and run to the hangar\n";
    cout << "Enter choice: ";

    choice = getChoice(1, 2);

    if (choice == 1) {
        hasCode = true;
        cout << "\nYou picked up the Rebel access code.\n";
        cout << "Leia says, \"Good. That code unlocks the hangar door.\"\n";
    } else {
        cout << "\nYou leave the data chip behind.\n";
        cout << "That might be a problem later...\n";
    }

    locked_hangar(hasCode);
}

void locked_hangar(bool hasCode) {
    int choice;

    cout << "\n--- ROOM 2: LOCKED HANGAR ---\n";
    cout << "You reach the hangar, but the blast door is locked.\n";
    cout << "A sign reads: ACCESS CODE REQUIRED.\n\n";

    if (hasCode == true) {
        cout << "You use the data chip to unlock the door.\n";
        cout << "The blast door opens, revealing an X-Wing fighter.\n";
        final_escape();
    } else {
        cout << "You do not have the access code.\n";
        cout << "What do you do?\n";
        cout << "1. Try to force the door open\n";
        cout << "2. Go back to look for the code\n";
        cout << "Enter choice: ";

        choice = getChoice(1, 2);

        if (choice == 1) {
            bad_ending();
        } else {
            cout << "\nYou rush back and find the data chip on the table.\n";
            cout << "You return to the hangar and unlock the door.\n";
            final_escape();
        }
    }
}

void final_escape() {
    int choice;

    cout << "\n--- ROOM 3: DEATH STAR TRENCH ---\n";
    cout << "You launch in the X-Wing as Darth Vader follows behind you.\n";
    cout << "Obi-Wan's voice says, \"Trust your instincts.\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Use the targeting computer\n";
    cout << "2. Use the Force\n";
    cout << "Enter choice: ";

    choice = getChoice(1, 2);

    if (choice == 1) {
        cout << "\nYou use the targeting computer and fire too late.\n";
        cout << "The shot misses, but you escape into hyperspace.\n";
        cout << "\n*** ENDING: YOU SURVIVED, BUT THE FIGHT CONTINUES ***\n";
    } else {
        cout << "\nYou turn off the targeting computer and trust the Force.\n";
        cout << "Your shot hits the reactor port. The Death Star explodes!\n";
        cout << "\n*** ENDING: GALAXY SAVED ***\n";
    }
}

void empire_ship() {
    int choice;

    cout << "\n--- IMPERIAL STAR DESTROYER ---\n";
    cout << "You board a Star Destroyer and are given stormtrooper armor.\n";
    cout << "Darth Vader says, \"Your loyalty will be tested.\"\n\n";

    cout << "What do you do?\n";
    cout << "1. Pledge loyalty to the Empire\n";
    cout << "2. Secretly contact the Rebellion\n";
    cout << "Enter choice: ";

    choice = getChoice(1, 2);

    if (choice == 1) {
        cout << "\nYou rise through the Imperial ranks.\n";
        cout << "The galaxy fears your name.\n";
        cout << "\n*** ENDING: THE IMPERIAL PATH ***\n";
    } else {
        cout << "\nYou send a secret message to Rebel spies.\n";
        cout << "They rescue you during a hyperspace jump.\n";
        cout << "\n*** ENDING: DOUBLE AGENT ***\n";
    }
}

void back_door() {
    cout << "\n--- HIDDEN BACK DOOR PASSAGE ---\n";
    cout << "You sneak through a hidden passage and find R2-D2.\n";
    cout << "R2 projects a hologram showing the Rebel access code location.\n";
    cout << "You follow the map to the Rebel base.\n\n";

    rebel_base();
}

void moisture_farm() {
    cout << "\n--- MOISTURE FARM ---\n";
    cout << "You return home, hoping to avoid trouble.\n";
    cout << "But Imperial troops are already there.\n";
    cout << "You realize you cannot escape your destiny.\n";
    cout << "\n*** ENDING: DESTINY CALLS ***\n";
}

void bad_ending() {
    cout << "\nYou try to force the hangar door open.\n";
    cout << "An alarm sounds, and stormtroopers surround you.\n";
    cout << "\n*** ENDING: CAPTURED BY THE EMPIRE ***\n";
}