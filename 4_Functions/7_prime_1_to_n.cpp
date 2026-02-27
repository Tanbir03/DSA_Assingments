#include <iostream>
using namespace std;

void is_prime(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
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
            cout << i << " ";
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    int x;
    cin >> x;

    is_prime(x);

    return 0;
}