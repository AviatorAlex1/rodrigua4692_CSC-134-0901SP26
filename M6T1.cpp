#include <iostream>
#include <string>
using namespace std;

void part1();
void part2();

int main() {
    part1();
    part2();

    return 0;
}

void part1() {
    const int DAYS = 5;
    string days[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int cars;
    int total = 0;
    double average;

    cout << "Part 1 - No Arrays for Car Counts" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << "Enter cars counted on " << days[i] << ": ";
        cin >> cars;

        total += cars;
    }

    average = static_cast<double>(total) / DAYS;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << average << endl;
}

void part2() {
    const int DAYS = 5;
    string days[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[DAYS];

    int total = 0;
    double average;

    cout << "\nPart 2 - Using an Array" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << "Enter cars counted on " << days[i] << ": ";
        cin >> cars[i];

        total += cars[i];
    }

    average = static_cast<double>(total) / DAYS;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << average << endl;

    cout << "\nWeekly Car Count Data" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << days[i] << ": " << cars[i] << " cars" << endl;
    }

    cout << "\nASCII Bar Chart" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << days[i] << ": ";

        for (int j = 0; j < cars[i]; j++) {
            cout << "*";
        }

        cout << endl;
    }
}