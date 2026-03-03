#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n], max, pos = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i + 1;
        }
    }

    cout << max << " " << pos;

    return 0;
}