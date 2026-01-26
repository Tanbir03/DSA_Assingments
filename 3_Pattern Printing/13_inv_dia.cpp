#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        for(int s = 1 ; s <= ((n-i)+1) ; s++) {
            cout << "*";
        }

        for(int j = 1 ; j <= ((i*2)-1) ; j++) {
            if(j % 2 == 0) {
                cout << " ";
            } else {
                cout << " ";
            }
        }

        for(int s = 1 ; s <= ((n-i)+1) ; s++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = (n-1) ; i >=1 ; i--) {
        for(int s = ((n-i)+1) ; s >= 1 ; s--) {
            cout << "*";
        }

        for(int j = ((i*2)-1) ; j >= 1 ; j--) {
            if(j % 2 == 0) {
                cout << " ";
            } else {
                cout << " ";
            }
        }

        for(int s = 1 ; s <= ((n-i)+1) ; s++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}