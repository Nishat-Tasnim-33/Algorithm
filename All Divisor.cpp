#include<bits/stdc++.h>
using namespace std;

int mark[1000002];
void Divisors ( int n )
{
    int i, j ;
    vector <int > divisors [1000002] ;
    for ( i = 1; i <= n ; i ++ )
    {
        for ( j = i ; j <= n ; j += i )
            divisors[j].push_back ( i ) ;

    }
}
int main()
{
    int a;
    cin >> a;
    int c[1000000];
    //Divisors(a);
    int i, j ;
    vector <int > divisors ;
    for ( i = 1; i <= a ; i ++ )
    {
        for ( j = i ; j <= a ; j += i )
            divisors[j].push_back ( i ) ;

    }
    for(int i=0; i<divisors.size(); i++)
    {
        cout<<c[i]<<endl;
    }
    return 0;
}
