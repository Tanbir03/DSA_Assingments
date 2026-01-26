#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n ; i >= 1 ; i--) {
        for(int s = (n-i) ; s >= 1 ; s--) {
            cout << " ";
        }

        if(i == 1 || i == n) {
            for(int j = ((i*2)-1) ; j >= 1 ; j--) {
                if(j % 2 == 0) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
        }else {
            for(int j = ((i*2)-1) ; j >= 1 ; j--) {
                if(j == 1 || j == ((i*2)-1)){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}