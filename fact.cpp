#include<bits/stdc++.h>
using namespace std;

vector<long long > Prime, Num;
vector< pair<long long , long long > > Factor;
bool mark[1000006], mark2[1000006];
long long  nn = 1000000;
void Sieve()
{
    long long  limit = 1000;
    Prime.push_back(2);
    for(long long  i = 4; i <= nn; i+=2) mark[i] = 1;
    mark[0] = mark[1] = 1;
    for(long long  i = 3; i <= nn; i+=2)
    {
        if(mark[i]==0)
        {
            Prime.push_back(i);
            if(i<=limit)
            {
                for(long long  j = i*i; j <= nn; j+=i*2)
                    mark[j] = 1;
            }
        }
    }
}

int main()
{
    Sieve();
    long long  x;
    cin>>x;
    long long  n = x;
    long long  cnt, num;
    for(int i = 0; i < (int)Prime.size() && Prime[i]*Prime[i] <= x; i++)  /// Start's here
    {
        cnt = 0;
        while(x%Prime[i]==0)
        {
            cnt++;
            x /= Prime[i];
        }
        if(cnt>0)
        {
            Factor.push_back(make_pair(Prime[i], cnt));
        }
    }
    if(x>1)
    {
        Factor.push_back(make_pair(x,1));
    }
}
