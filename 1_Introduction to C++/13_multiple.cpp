#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    if((1 <= n && n <= 1000000000) && (1 <= m && m <= 1000000000)) {
        if(m % n == 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "Invalid Input";
    }

    return 0;
}