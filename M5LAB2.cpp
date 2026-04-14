
#include <iostream>
#include <limits>
using namespace std;
 
// User Input for Length
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}
 
// User inout for Width 
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}
 
// Math the Area!
double getArea(double length, double width) {
    return length * width;
}
 
// Displays Area Calculations
void displayData(double length, double width, double area) {
    cout << "\n--- Rectangle Information ---" << endl;
    cout << "Length : " << length << endl;
    cout << "Width  : " << width  << endl;
    cout << "Area   : " << area   << endl;
    cout << "-----------------------------" << endl;
}
 
int main() {
    double length = getLength();
    double width  = getWidth();
    double area   = getArea(length, width);
    displayData(length, width, area);
    return 0;
}