//This code calculates sum & product of all elements of array
#include <bits/stdc++.h>
using namespace std;

void swapMaxMin(int arr[], int n);

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Swap the maximum and minimum elements
    swapMaxMin(arr, n);

    cout << "Array after swapping the maximum and minimum elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void swapMaxMin(int arr[], int n)
{
    if (n <= 1)
        return;  // No need to swap if there's only one element

    int maxIdx = 0, minIdx = 0;

    // Find the indices of the maximum and minimum elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIdx])
        {
            maxIdx = i;
        }
        if (arr[i] < arr[minIdx])
        {
            minIdx = i;
        }
    }

    // Swap the maximum and minimum elements in the array
    swap(arr[maxIdx], arr[minIdx]);
}
