#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n;
    cin >> m;

    if((1 <= n && n <= 1000000000) && (1 <= m && m <= 1000000000)) {
        cout << n << " + " << m << " = " << n + m << endl;
        cout << " " << endl;
        cout << n << " - " << m << " = " << n - m << endl;
        cout << " " << endl;
        cout << n << " * " << m << " = " << (long long)n * m << endl;
        cout << " " << endl;
        cout << n << " / " << m << " = " << n / m << endl;
        cout << " " << endl;
        cout << n << " % " << m << " = " << n % m << endl;
    } else {
        cout << "Invalid Input";
    }

    return 0;
}