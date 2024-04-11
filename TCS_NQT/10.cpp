#include <bits/stdc++.h>
using namespace std;

/*
Jumbled Rotate-
    You are given N strings consisting of digits,
    alphabets, and special characters.Each string contains at least one digit and one alphabet.From each string extract the digits, find their sum, and square it.If the square is odd, perform left rotations by the square, else perform right rotations by the square.The number of digits in any string is guaranteed to be less than equal to 4.

    Input format :
    The first line contains an integer number,
    N.Second line contains N space - separated strings.

    Output format:
    Single line output consists of N space -
        separated strings.

*/

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