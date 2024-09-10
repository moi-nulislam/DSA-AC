#include <bits/stdc++.h>
using namespace std;

int bin_deci(int n);

int main()
{
    int bin;
    cout << "Enter a bin value: ";
    cin >> bin;

    int res = bin_deci(bin);
    cout << res;

    return 0;
}


int bin_deci(int n)
{
    int deci = 0, i = 1;
    while (n > 0)
    {
        int bin_digit = n % 10;
        n = n / 10;

        int deci_digit = bin_digit * i;
        i *= 2;
        
        deci += deci_digit;
    }

    return deci;
}