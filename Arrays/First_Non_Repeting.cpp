#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        auto key = mp.find(arr[i]);
        if (key->second == 1)
        {
            return key->first;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {6, 7, 3, 4, 4, 6, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeating(arr, n);
    return 0;
}