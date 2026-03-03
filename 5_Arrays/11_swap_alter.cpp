#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            if (j % 2 != 0)
            {
                int temp;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }

        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}