#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    if((1 <= n && n <= 1000) && (1 <= m && m <= 1000)) {

        cout << (n % 10) + (m % 10);
    } else {
        cout << "Invalid Input";
    }

    return 0;
}