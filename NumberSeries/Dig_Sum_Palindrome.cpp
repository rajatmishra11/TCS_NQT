#include <iostream>

using namespace std;

bool palindrome(int i)
{
    int num = i;
    int rev = 0;
    while (i)
    {
        int dig = i % 10;
        i = i / 10;
        rev = rev * 10 + dig;
    }
    return num == rev;
}

int isDigitSumPalindrome(int n)
{
    int dig_sum = 0;
    while (n)
    {
        int dig = n % 10;
        dig_sum += dig;
        n = n / 10;
    }
    return palindrome(dig_sum);
}

int main()
{
    int num = 121;
    if (isDigitSumPalindrome(num))
        cout << num << " is a digit sum palindrome" << endl;
    else
        cout << num << " is not a digit sum palindrome" << endl;
    return 0;
}