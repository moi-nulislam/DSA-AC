#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deci, bin = 0;
    cout << "Enter decimal value: ";
    cin >> deci;

    int i = 1;
    while (deci > 0)
    {
        int bin_digit = deci % 2;
        deci = deci / 2;

        bin += (i * bin_digit);
        i *= 10;
    }

    cout << bin;

    return 0;
}