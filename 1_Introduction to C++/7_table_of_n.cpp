#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if(1 <= n && n <= 100) {
        for(int i = 1 ; i <= 10 ; i++) {
            cout << n << " * " << i << " = " << (n*i) << endl;
        }
    } else {
        cout << "Invalid Input";
    }

    return 0;
}