#include <iostream>
using namespace std;

int main() {
    int a, b, c, min, max;

    cin >> a >> b >> c;
    if((1 <= a && a <= 1000000000) && (1 <= b && b <= 1000000000) && (1 <= c && c <= 1000000000)) {
        if((a > b) && (a > c)) {
            max = a;
            if(b < c) {
                min = b;
            } else {
                min = c;
            }
        } else if((b > a) && (b > c)) {
            max = b;
            if(a < c) {
                min = a;
            } else {
                min = c;
            }
        } else {
            max = c;
            if(a < b) {
                min = a;
            } else {
                min = b;
            }
        }

        cout << "Min = " << min << endl;
        cout << "Max = " << max;
    } else {
        cout << "Invalid Input";
    }

    return 0;
}