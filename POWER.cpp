#include<bits/stdc++.h>
using namespace std;

int POWER(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    int x=POWER(a,b/2);
    x*=x;
    if(b%2==1)
    {
        x*=a;
    }
    return x;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=POWER(a,b);
    printf("%d\n",x);
    return 0;
}
