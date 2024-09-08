#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int s = 0, k = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        s++;
        for (int j = 0; j < k; j++)
        {
            cout << i + 1;
        }
        k--;
        cout << endl;
    }

    return 0;
}