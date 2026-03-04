// CSC 134
// M3LAB2
// Rodrigua4692
// 02 MAR 2026

#include <iostream>

using namespace std;

int main ()
{
    int grade;

    cout << "Enter a Number (Whole) from 0 - 100: ";
    cin >> grade; 

    if (grade < 0 || grade > 100 ) { 
        cout << "This is an invalid number, Please enter a number between 0 and 100. ";
    }
    else if (grade >= 90 && grade <= 100) { 
        cout << "This is a Letter Grade of: A " << endl;
    }
    else if (grade >= 80 && grade <= 89) { 
        cout << "This is a Letter Grade of: B " << endl;
    }
    else if (grade >= 70 && grade <= 79) { 
        cout << "This is a Letter Grade of: C " << endl;
    }
    else if (grade >= 60 && grade <= 69) { 
        cout << "This is a Letter Grade of: D "  << endl;
    }
    else { 
        cout << "This is a Letter Grade of: F " << endl;
    }            
    cout << endl;
    return 0;
}   