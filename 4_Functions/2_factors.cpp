#include <iostream>
using namespace std;

void print_fact(int n)
{
    for (int i = 1 ; i <= n ; i++)
    {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
}

int main()
{
    int x;
    cin >> x;

    print_fact(x);

    return 0;
}