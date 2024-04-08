#include <iostream>

using namespace std;

int fac(int i)
{
    if (i == 0 || i == 1)
        return 1;
    else
        return i * fac(i - 1);
}

int isStrong(int N)
{
    int ans = 0;
    int pre = N;
    while (N)
    {
        int dig = N % 10;
        N = N / 10;
        ans = ans + fac(dig);
    }
    return ans == pre;
}

int main()
{
    int num = 145;
    if (isStrong(num))
        cout << num << " is a strong number" << endl;
    else
        cout << num << " is not a strong number" << endl;
    return 0;
}