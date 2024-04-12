#include <bits/stdc++.h>
using namespace std;

// Statement to find 2nd largest in array->

int solve(int arr[])
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            max2 = max1;
        }
    }
    return max2;
}
int main()
{
    int arr[7] = {2, 3, 4, 1, 5, 7, 8};
    cout << solve(arr);
    return 0;
}