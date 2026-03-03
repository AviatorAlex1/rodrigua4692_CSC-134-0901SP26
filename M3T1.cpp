 // CSC 134
// M3T1 
// Rodrigua4692
// 02 MAR 2026

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    //Variables
    int WidthOne, LengthOne, WidthTwo, LengthTwo;
    int AreaOne, AreaTwo;
    
    //Usr Input
    cout << "Please enter the width and height of the first" << endl;
    cout << "Rectangle, Seperated by a space or new line." << endl;
    cin >> WidthOne >> LengthOne;

    cout << "Please enter the width and height of the Second" << endl;
    cout << "Rectangle, Seperated by a space or new line." << endl;
    cin >> WidthTwo >> LengthTwo;

    // DO Math!
    AreaOne = WidthOne * LengthOne;
    AreaTwo = WidthTwo * LengthTwo;

    //Display the Math Results!
    cout << "Rectangle One has an area of: " << AreaOne << endl;
    cout << "Rectangle Two has an area of: " << AreaTwo << endl;

    cout << endl;
    return 0;
}
