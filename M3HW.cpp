/*
CSC 134
M3HW - GOLD
rodrigua4692
9 MAR 2026
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Path_1();
void Path_2();

int main()
{

    cout << endl;
    cout << "=====================================================" << endl;
    cout << "QUESTION 1 - Chat Bot" << endl;
    cout <<endl;

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

    cout << endl;
    cout << "=====================================================" << endl;
    cout << "QUESTION 2 - Reciept Calculator" << endl;
    cout <<endl;

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

    cout << endl;
    cout << "=====================================================" << endl;
    cout << "QUESTION 3 - Choose your Own Adventure Game RPG" << endl;
    cout <<endl;

    // Question 3:

    int Game_choice;

    cout << "Welcome to the Dungeon!!" << endl;
    cout << endl;
    cout << "You are a Warrior Knight that has awoken to the Princess being kidnapped by evil orcs..." << endl;
    cout << "You mission is to choose the right path to the Princess's castle and save her from the orcs before they get away with her..." << endl; 
    cout << endl;
    cout << "You approach a split in the road... 1) Forest of the Wicked or 2) The Dark Shadow-y path of Dispair... What path do you choose?: " << endl; 
    cin >> Game_choice; 
    
     if (1 == Game_choice) {
        Path_1();
    }
    else if (2 == Game_choice) {
        Path_2();
    }
    else {
        cout << "I'm sorry, that is not a valid path to take!!" << endl;
    }

    cout << endl;
    
    // Q3 FIN.

    cout << endl;
    cout << "=====================================================" << endl;
    cout << "QUESTION 4 - MATH PRACTICE" << endl;
    cout <<endl;

    // Question 4 

    // Q4 Variables
    int num1, num2;
    int user_answer;
    int correct_answer;

    // Seed the random number generator
    srand(time(0));

    // Generate two random single-digit numbers
    num1 = rand() % 10;
    num2 = rand() % 10;

    // Ask the math question
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    cin >> user_answer;

    // Calculate correct answer
    correct_answer = num1 + num2;

    // Check if correct
    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
    }

    // Q4 Fin. 
    // FINALLY!!!!


    return 0;
}

// FUNCTIONS FOR THE RPG GAME IN Q3: 

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
// END OF Q3 FUNCTIONS FOR RPG GAME IN Q3