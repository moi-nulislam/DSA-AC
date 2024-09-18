//This code calculates sum & product of all elements of array
#include <bits/stdc++.h>
using namespace std;


void sum_prod(int arr[], int n);

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sum_prod(arr, n);

    return 0;
}


void sum_prod(int arr[], int n)
{
    int sum = 0, prod = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }

    cout << sum << endl;
    cout << prod << endl;

}