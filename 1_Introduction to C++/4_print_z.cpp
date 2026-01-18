#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < 5; j++)
            {
                if (j == 5 - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}