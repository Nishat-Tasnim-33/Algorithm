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
    //vector<long long int>pr;
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++)
    {
        long long int a,b,c=0,d=0,e=0,f=0;
        scanf("%lld%lld",&a,&b);
        for(int i=a; i<=b; i++)
        {
            if(mark[i]==0)
            {
                // c++;
                //pr.push_back(i);
                c=i/10;
                d=i%10;
                c+=d/10;
            }
            if(d>0)
            {
                c+=d;
            }
            if(mark[c]==0)
            {
                f++;
            }
        }
        printf("%lld\n",f);
    }
}
/* for( int i=0; i<pr.size(); i++)
 {
     printf("%d ",pr[i]);
 }
 printf("\n%d\n",c);**/
