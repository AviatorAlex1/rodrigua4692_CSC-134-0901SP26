#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of Cars per day, two different ways
    method1();

    cout << endl;
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
    cout << endl;

    method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - Simple Loop, no arrays
    // Count 5 days of cars , get total and average
    cout << "Count the amount of cars that pass by the site" << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int car_today;     // current value, to add
    int car_total = 0; // add up 
    double car_avg = 0;// average

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> car_today;
        car_total += car_today;
        count++; // Move to next day
    }
    cout << "Total = " << car_total << endl;
    car_avg = (double) car_total / SIZE;
    cout << "Average = " << car_avg << endl;
}
void method2() {
    // Method 2 uses two arrays:
    // Names of the days
    // # Cars found on the days

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"}; // initialized
    int car[SIZE]; // not initialized
    int car_total = 0;
    double car_avg = 0.0;

    for (int i=0; i < SIZE; i++) {
        cout << "# on " << days[i] << ": ";
        cin >> car[i];
    }
    // print output in "tabular" (table) format
    cout << "Day\tCar" << endl;
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t" << car[i] << endl;
        // find the total
        car_total += car[i];
    }
    // find total, print results
    car_avg = (double) car_total / SIZE;
    cout << "Total = " << car_total << endl;
    cout << "Average = " << car_avg << endl;

}