// CSC 134
// M3LAB1
// Rodrigua4692
// 02 MAR 2026

#include <iostream>

using namespace std;

void Path_1();
void Path_2();

int main ()
{    
    int choice;

    cout << "Welcome to the Dungeon!!" << endl;
    cout << endl;
    cout << "You are a Warrior Knight that has awoken to the Princess being kidnapped by evil orcs..." << endl;
    cout << "You mission is to choose the right path to the Princess's castle and save her from the orcs before they get away with her..." << endl; 
    cout << endl;
    cout << "You approach a split in the road... 1) Forest of the Wicked or 2) The Dark Shadow-y path of Dispair... What path do you choose?: " << endl; 
    cin >> choice; 
    
     if (1 == choice) {
        Path_1();
    }
    else if (2 == choice) {
        Path_2();
    }
    else {
        cout << "I'm sorry, that is not a valid path to take!!" << endl;
    }

    cout << endl;
    return 0;
}

void Path_1() {
  // this function is called in main if the user chooses 1.
  cout << "You Chose to go into the Forest of the Wicked" << endl;
  cout << "As you enter into the forest you get attacked by a pack of wicked demon dogs that you are ill-equipped to fight!" << endl;
  cout << "You get mauled to death.. GAME OVER!!!!";
}

void Path_2() {
  // this function is called in main if the user chooses 1.
  cout << "You Chose to go into The Dark Shadow-y path of Dispair" << endl;
  cout << "As you enter defeat a Orc Patrol and discover a hidden path to the Princess's castle!!!" << endl;
  cout << "After Defeating the Orcs at the castle you manage to save the Princess and become the new prince... VICTORY!!!";
}