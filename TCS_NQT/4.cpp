#include <bits/stdc++.h>
using namespace std;

/*
This or That->
Given an alphanumeric string having alphabets, digits, and some special characters. Extract the special characters from the string and print them if the sum of the digits is less than a given number M otherwise print the alphabet in uppercase. The Input string contains at-least one alphabet, one digit, and one special character.

Input format:
The first line will have a string and the second line will have the integer number M.

Output format:
String in a single line.

*/
int main()
{

    string str = "n3*o3(bo7%g6h)a*1";
    int M = 52;
    string sym = "";
    string uc = "";
    int sum = 0;
    int i = 0;
    while (i < str.size())
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            sum += (str[i] - '0');
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            uc += toupper(str[i]);
        }
        else
        {
            sym += str[i];
        }
        i++;
    }
    cout << "sum = " << sum << endl;
    if (sum > M)
    {
        cout << uc;
    }
    else
        cout << sym;
    return 0;
}