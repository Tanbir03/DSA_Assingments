#include <iostream>
using namespace std;

int main()
{
    int n, x, flag = 0;
    cin >> n >> x;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}