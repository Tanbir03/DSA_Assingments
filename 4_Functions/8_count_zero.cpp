#include <bits/stdc++.h>
using namespace std;

int total_zeros(long long n)
{
    long long ldigit, count = 0;
    if (n == 0)
    {
        count += 1;
    }
    else
    {
        while (n != 0)
        {
            ldigit = n % 10;
            n = n / 10;

            if (ldigit == 0)
            {
                count += 1;
            }
        }
    }

    return count;
}

int main()
{
    long long x;
    cin >> x;
    cout << total_zeros(x);

    return 0;
}