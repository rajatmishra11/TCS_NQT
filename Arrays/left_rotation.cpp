#include <bits/stdc++.h>
using namespace std;

// Note- Left Rotate Formula-> arr[i]= arr[(i+d+n)%n]
void rotateArr(int arr[], int d, int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[(i + d + n) % n];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    rotateArr(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}