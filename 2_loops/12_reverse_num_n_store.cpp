#include <iostream>
using namespace std;

int main() {
    long long n, rev = 0;
    cin >> n;

    if(n == 0){
        cout << 0;
    } else {
        while(n != 0) {
            rev = (rev * 10) + (n % 10);
            n = n / 10;
        }

        cout << rev;
    }

    return 0;
}