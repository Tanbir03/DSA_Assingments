#include <iostream>
using namespace std;

void arng(int n)
{

    int arr[n], e_cnt = 0, o_cnt = 0, odd[n / 2], even[n / 2];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e_cnt] = arr[i];
            e_cnt++;
        }
        else
        {
            odd[o_cnt] = arr[i];
            o_cnt++;
        }
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            cout << odd[i] << " ";
        }

        for (int i = (n / 2) - 1; i >= 0; i--)
        {
            cout << even[i] << " ";
        }
    }
    else
    {

        for (int i = 0; i < (n / 2) + 1; i++)
        {
            cout << odd[i] << " ";
        }

        for (int i = (n / 2) - 1; i >= 0; i--)
        {
            cout << even[i] << " ";
        }
    }
}

int main()
{

    int x, n;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> n;
        arng(n);
        cout << endl;
    }

    return 0;
}