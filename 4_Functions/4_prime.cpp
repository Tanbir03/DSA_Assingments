#include <iostream>
using namespace std;

string is_prime(int n)
{
    int count = 0;
    string msg;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
        else
        {
            continue;
        }
    }

    if (count == 2)
    {
        msg = "Prime";
    }
    else
    {
        msg = "Not Prime";
    }

    return msg;
}

int main()
{
    int x;
    cin >> x;

    cout << is_prime(x);

    return 0;
}