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

// Given a numner, Return the Square of it
int square (int number) {
    int result;
    result = numner * number;
    return result;

}
int main() {
    int count = 1;
    int result; 

    while (count <= 10){
       result = square(count);
        printResult(count,result);
        count++;

    }
}