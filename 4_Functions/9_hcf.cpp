#include <iostream>
using namespace std;

int hcf(int x, int y) {
    int hcf, min;

    if (x < y) {
        min = x;
    } else {
        min = y;
    }

    for(int i = 1 ; i <= min ; i++) {
        if(x % i == 0 && y % i == 0) {
            hcf = i;
        } 
    }

    return hcf;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << hcf(n, m);

    return 0;
}