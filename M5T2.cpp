// CSC 134
// M5T2
// Rodrigua4692
// 30 MAR 2026


#include <iostream>
using namespace std;

// Given 2 numbers, Print them out on a line
void printResult(int number, int result) {
    cout << number << " squared=" << result << endl;
}

int main() {
    int count = 1;
    int result; 

    while (count <= 10){
        result = count * count;
        //cout << count << "squared = " << result << endl;
        printResult(count,result);
        count++;

    }
}