#include<bits/stdc++.h>
using namespace std;

int gcd(int vajjo,int vajok)
{
    if(vajok==0)
        return vajjo;
    return gcd(vajok,vajjo%vajok);

}
int main()
{
    int vajjo,vajok;
    cin>>vajjo>>vajok;
    int x = gcd(vajjo,vajok);
    cout<<x<<endl;
}

