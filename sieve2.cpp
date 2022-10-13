
#include <bits/stdc++.h>
using namespace std;

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}

int main()
{
    vector <int> primee;
    int n ;
    cin>>n;
    SieveOfEratosthenes(n);
    for (int i = 1; i <= n; i++) {
        if (i == 2)
            primee.push_back(2);
        else if (i % 2 == 1 && Primes[i / 2] == 0)
            primee.push_back(i);
    }

    for(int i=0; i<primee.size(); i++ )
    {
        cout<<primee[i]<<' ';
    }

    return 0;
}
