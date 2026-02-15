#include <iostream>
using namespace std;

void hello_func(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << "I am learning functions" << endl;
    }
}

int main()
{
    int x;
    cin >> x;

    hello_func(x);

    return 0;
}