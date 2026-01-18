#include <iostream>
using namespace std;

int main() {
    int marks;

    cin >> marks;

    if(1 <= marks && marks <= 100) {
        if(90 < marks) {
            cout << "Excellent";
        } else if(80 < marks && marks <= 90) {
            cout << "Good";
        } else if(70 < marks && marks <= 80) {
            cout << "Fair";
        } else if(60 < marks && marks <= 70) {
            cout << "Meets Expectations";
        } else {
            cout << "Below Par";
        }
    } else {
        cout << "Invalid Input";
    }

    return 0;
}