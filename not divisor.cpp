#include<bits/stdc++.h>
using namespace std;
vector <long long int> notdiv;
void not_divisor(long long int k)
{
    long long int i;
    for(i=1; i<=100000000; i++)
    {
        if(i%k!=0)
        {
            notdiv.push_back(i);
        }
    }
}
int main()
{
    long long int k,n,c;
    cin>>k;
    cin>>n;
    not_divisor(k);
    c = notdiv[n-1];
    cout<<c;
    return 0;
}
