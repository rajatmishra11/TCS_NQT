#include <bits/stdc++.h>
using namespace std;

/*
Statement- count all primes having even sum in range [a, b];
*/
// optimization-> use Sieve of erorthenes

bool is_even_dig_sum(int n)
{
    int sum = 0;
    while (n)
    {
        int dig = n % 10;
        n = n / 10;
        sum += dig;
    }
    if (sum % 2)
        return false;
    else
        return true;
}
int main()
{

    int a = 10;
    int b = 25;
    // create the sieve
    bool primes[b + 1];
    fill(primes, primes + b, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= b; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= b; j += i)
            {
                primes[j] = false;
            }
        }
    }
    // for (int i = 0; i < b; i++)
    // {
    //     if (primes[i])
    //         cout << i << " ";
    // }
    // cout << endl;
    int count = 0;
    for (int i = a; i < b; i++)
    {
        if (primes[i] && is_even_dig_sum(i))
        {
            // cout << i << ","
            //      << "even sum hai" << endl;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}