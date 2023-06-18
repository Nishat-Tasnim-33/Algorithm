
#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int fac =1;
    for(int i=1; i<=a; i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int n,r;
    cin >>n>>r;
    int hold1 = fact(n);
    int hold2 = fact(r);
    int hold3 = fact(n-r);
    int ans=(hold1/(hold2*hold3));
    cout<<ans<<endl;

}
