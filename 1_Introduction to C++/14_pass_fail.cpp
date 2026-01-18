#include <iostream>
using namespace std;

int main() {
    int marks;

    cin >> marks;

    if(0 <= marks && marks <= 100) {
        if(marks >= 35) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
    } else {
        cout << "invalid Input";
    }

    return 0;
}