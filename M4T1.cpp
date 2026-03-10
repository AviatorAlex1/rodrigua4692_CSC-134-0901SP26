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
    
    int i = 0;
    // Start of While Loop
    while (count < 5) {
        cout << "Hello" << count << endl;
    }

    cout << "That's All!" << endl;

    // program 5-6 

    const int MIN_NUMBER = 1; 
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER; 

    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {

        cout << num << "\t\t" << num * num << endl;
        num++;
    }

    return 0; // done
}