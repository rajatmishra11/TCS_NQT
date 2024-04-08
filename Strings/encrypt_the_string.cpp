#include <bits/stdc++.h>
using namespace std;

string encryptString(string s)
{
    // aabc$
    s.push_back('$');
    string ans = "";
    char c = s[0];
    int freq = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            freq++;
        }
        else if (s[i] != c)
        {
            ans.push_back(c);
            ans += to_string(freq);
            c = s[i];
            freq = 1;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string input = "aabc";
    string encrypted = encryptString(input);
    cout << "Encrypted string: " << encrypted << endl;
    return 0;
}