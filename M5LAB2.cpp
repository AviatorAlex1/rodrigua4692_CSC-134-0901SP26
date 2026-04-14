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
// Asks the user to enter the rectangle's length and returns it as a double
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}
 
// Asks the user to enter the rectangle's width and returns it as a double
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}
 
// Calculates and returns the area given length and width
double getArea(double length, double width) {
    return length * width;
}
 
// Displays length, width, and area in well-formatted output
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Information ---" << endl;
    cout << "Length : " << length << endl;
    cout << "Width  : " << width  << endl;
    cout << "Area   : " << area   << endl;
    cout << "-----------------------------" << endl;
}