#include <iostream>
using namespace std;

int main() {
    int pos = 0, neg = 0, eve = 0, odd = 0, len, n;
    cin >> len;

    for(int i = 0 ; i < len ; i ++) {
        cin >> n;
        if(n == 0) {
            eve = eve + 1;
        } else {
            if(n > 0) {
                pos = pos + 1;
            }
            if(n < 0) {
                neg = neg + 1;
            }
            if(n % 2 == 0) {
                eve = eve + 1;
            }
            if(n % 2 != 0) {
                odd = odd + 1;
            }
        }
    }

    cout << pos << endl;
    cout << neg << endl;
    cout << eve << endl;
    cout << odd;

    return 0;
}