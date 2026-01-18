#include <iostream>
using namespace std;

int main() {
    int n, f;

    cin >> f >> n;

    if((1 <= n && n <= 1000000000) && (1 <= f && f <= 1000000000)) {
        if(f % n == 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "Invalid Input";
    }

    return 0;
}