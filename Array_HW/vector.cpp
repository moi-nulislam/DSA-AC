#include <bits/stdc++.h>
#include<vector>
using namespace std;

int reverse(vector<int> &vec, int n);

int main()
{
    vector <int> vec;
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    reverse(vec, n);
    

    return 0;
}

int reverse(vector<int>& vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int val = vec.back();
        cout << val << " ";
        vec.pop_back();
    }
}