#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,r1,r2;
    cin>>a>>r1>>r2;
    int b= (((-a)*(r1+r2)));
    int c= ((a)*(r1*r2));
    if (a==1)
    cout<<"x^2";
    else
        cout<<a<<"x^2";
    if(b<0){
        cout<<b<<'x';
    }
    else
    {
        cout<<'+'<<b<<'x';
    }
    if(c<0){
        cout<<'-'<<c;
    }
    else
    {
        cout<<'+'<<c<<"=0"<<endl;
    }
}
