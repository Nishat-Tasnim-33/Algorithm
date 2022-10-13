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
    Sieve();
    vector<int>factors;
    int n,x,cnt=0;
    while(1)
    {
        factors.clear();
        scanf("%d",&n);
        x=n;
        if(x==0)
        {
            break;
        }
        if(x<0) x = -x;
        for(int i = 0; i < (int)Prime.size() && Prime[i]*Prime[i] <= x; i++)
        {
            cnt=0;
            while(x%Prime[i]==0)
            {
                cnt++;
                x/=Prime[i];
                factors.push_back(Prime[i]);
            }
        }
        if(x>1)
        {
            factors.push_back(x);
        }
        printf("%d = ",n);
        if(n<0)
            printf("-1 x ");
        int p = 0;
        for(int j=0; j<(int)factors.size(); j++)
        {
            if(p==1)
                printf(" x ");
            printf("%d",factors[j]);
            p=1;
        }
        printf("\n");
    }


}


