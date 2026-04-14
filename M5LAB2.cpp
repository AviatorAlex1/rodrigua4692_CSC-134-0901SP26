// CSC 134
// M5LAB1
// Rodrigua4692
// 13 APR 2026

#include <iostream>
using namespace std;
 
// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);
 
#include <iostream>
using namespace std;
 
// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);
 
int main()
{
    // This program calculates the area of a rectangle.
    // TODO: fix any syntax errors

// Get the rectangle's length.
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Get the rectangle's width.
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Get the rectangle's area. 
double getArea(double length, double width) {
    return length * width;
}
 
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Information ---" << endl;
    cout << "Length : " << length << endl;
    cout << "Width  : " << width  << endl;
    cout << "Area   : " << area   << endl;
    cout << "-----------------------------" << endl;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************