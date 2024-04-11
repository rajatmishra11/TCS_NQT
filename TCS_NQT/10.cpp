#include <bits/stdc++.h>
using namespace std;

string solve(string str)
{
    int sum = 0;
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            sum += (str[i] - '0');
        }
        else
        {
            temp += str[i];
        }
    }
    sum = sum * sum;
    int n = temp.size();
    string ans;
    int k = sum % temp.size();
    if (sum % 2 == 0)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[(i - k + n) % n]);
        }
    }
    else
    {
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[(i + k + n) % n]);
        }
    }
    return ans;
}
int main()
{
    int t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << solve(str);
    }
    return 0;
}