#include <iostream>
using namespace std;

int main() {
    int min, max, temp;

    cin >> min >> max;

    if((1 <= min && min <= 1000000000) && (1 <= max && max <= 1000000000)) {
        if(min > max) {
            temp = max;
            max = min;
            min = temp;
        }

        cout << "Min = " << min << endl;
        cout << "Max = " << max;
    } else {
        cout << "Invalid Input";
    }

    return 0;
}