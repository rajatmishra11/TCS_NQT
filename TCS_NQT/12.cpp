#include <bits/stdc++.h>
using namespace std;

// Statement -> Max. number of vowels in a substring of size "k".

int fun(string str, int n)
{
    int i = 0, j = 0, mx = INT_MIN;
    int vwl = 0;
    while (j < str.size())
    {
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
        {
            vwl++;
        }
        if ((j - i + 1) == n)
        {
            mx = max(mx, vwl);
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vwl--;
            }
            i++;
        }
        j++;
    }
    return mx;
}
int main()
{
    int k = 3;
    string str = "learnyseee";
    cout << fun(str, k);
    return 0;
}