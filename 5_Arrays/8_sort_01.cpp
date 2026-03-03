#include <iostream>
using namespace std;

void sort(int n)
{
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int temp;
            if (arr[j] == 1)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;

        sort(n);
    }

    return 0;
}