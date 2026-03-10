// CSC 134
// M4T1
// Rodrigua4692
// 9 MAR 2026


#include <iostream>
using namespace std;
  
int main()
{

    //Variable
    int count = 5;

    int number = 5;
    
    // Start of While Loop
    cout << "=======================" << endl; // Fancy Line also for OCD purposes... 
    cout << endl; //Just a break in the chain for OCD purposes... 
    int i = 0;
    while (i < number) {
        cout << "Hello" << count << endl;
        i++;
    }

    cout << "That's All!" << endl;

    cout << endl; //Just a break in the chain for OCD purposes... 
    cout << "=======================" << endl; // Fancy Line also for OCD purposes... 

    // program 5-6 

    const int MIN_NUMBER = 1; 
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER; 

    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {

        cout << num << "\t\t" << num * num << endl;
        num++;
    }
    cout << "=======================" << endl; // Fancy Line also for OCD purposes... 
    cout << endl; //Just a break in the chain for OCD purposes... 

    return 0; // done
}