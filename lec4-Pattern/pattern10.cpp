#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 2*i - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 2*i - 1; j++)
        {
            cout << " ";
        }
        if (i != 0)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}