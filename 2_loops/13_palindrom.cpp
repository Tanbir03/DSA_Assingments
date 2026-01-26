#include <iostream>
using namespace std;

int main() {
    long long n, rev = 0, temp;
    cin >> n;
    temp = n;

    if(temp == 0){
        rev = 0;
    } else {
        while(temp != 0) {
            rev = (rev * 10) + (temp % 10);
            temp = temp / 10;
        }
    }

    if(n == rev){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}