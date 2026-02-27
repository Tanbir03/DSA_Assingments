#include <iostream>
using namespace std;

long long fact(int x)
{
    long long fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n);

    return 0;
}