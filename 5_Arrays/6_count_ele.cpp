#include <iostream>
using namespace std;

int main()
{
    long long n, x, cnt = 0;
    cin >> n >> x;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}