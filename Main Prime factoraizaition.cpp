#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;
int mark[10000007];
int N=10000000;
void Sieve()
{
    int limit=sqrt(N)+5;
    mark[0]=mark[1]=1;
    Prime.push_back(2);
    for(int i=4; i<=N; i+=2)
    {
        mark[i]=1;
    }
    for(int i=3; i<=N; i+=2)
    {
        if(mark[i]==0)
        {
            Prime.push_back(i);
            if(i<=limit)
            {
                for(int j=i*i; j<=N; j+=(i*2))
                {
                    mark[j]=1;
                }
            }
        }
    }
}


int main()
{
    /*Sieve();
    vector<int>factors;
    int n,x,cnt=0;
    scanf("%d",&x);
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
            factors.push_back(map(Prime[i], cnt));
        }
    }
    if(x>1)
    {
        factors.push_back(map(x,1));
    }
    return 0;
}*/
int main()
{
    Sieve();
    ll x;
    cin>>x;
    ll n = x;
    ll cnt;
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
            Factor.pb(mp(Prime[i], cnt));
        }
    }
    if(x>1)
    {
        Factor.pb(mp(x,1));
    }
    return 0;
}
