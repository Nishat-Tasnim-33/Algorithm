#include<bits/stdc++.h>
using namespace std;

int POWER(int a, int b, int m)
{
    if(b==0)
    {
        return 1%m;
    }
    if(b==1)
    {
        return a%m;
    }
    int x=POWER(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
    {
        x=(x*(a%m))%m;
    }
    return x;
}
int main()
{
    int a,b,m;
    scanf("%d%d%d",&a,&b,&m);
    int x = POWER(a,b,m);
    printf("%d\n",x);
    return 0;
}

