#include <iostream>
#include <math.h>

using namespace std;

int isStrong(int N)
{
    int ans = 0;
    int pre = N;
    int no_of_digit = 0;
    while (N)
    {
        int dig = N % 10;
        N = N / 10;
        no_of_digit++;
    }
    N = pre;
    while (N)
    {
        int dig = N % 10;
        N = N / 10;
        ans = ans + (pow(dig, no_of_digit));
    }
    return ans == pre;
}

int main()
{
    int l = 1;
    int h = 10000;
    for (int i = l; i < h; i++)
    {
        int num = i;
        if (isStrong(num))
            cout << num << " ";
    }

    return 0;
}