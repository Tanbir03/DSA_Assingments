#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n], min, pos = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            pos = i + 1;
        }
    }

    cout << min << " " << pos;

    return 0;
}