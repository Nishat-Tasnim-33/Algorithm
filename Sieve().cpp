#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;
int mark[10000007];
int N=10000000;
void Sieve(int n)
{
    int limit=sqrt(N)+5;
    mark[0]=mark[1]=1;
    Prime.push_back(2);
    for(int i=4; i<=N; i+=2)
    {
        mark[i]=1;              /*2 3  5  7 8 9  11  13  15  17  19  */
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
    int n;
    cin>>n;
    int hold = Sieve(n);
    cout<<hold;
}

