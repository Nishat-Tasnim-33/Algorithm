#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b;
    ll maxi=-5;
    cin >> a >>b;

    int i, j ;
    vector <int > v ;
    vector <int > h ;
    for ( i = 1, j = 1; i<=a,j<=b; i ++,j++ )
    {
        if(a%i==0)
        {
            v.push_back(i);
        }
        if(b%j==0)
        {
            h.push_back(j);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<h.size();j++)
        {
            if(v[i]==h[j])
            {
                if(maxi<v[i])
                {
                    maxi=v[i];
                }
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}

