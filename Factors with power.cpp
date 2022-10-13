
#include<bits/stdc++.h>
using namespace std;

int Prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
int main()
{
    int T,c=0;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        int x,n;
        int A[101];
        for(int j = 0; j < 101; j++) A[j] = 0;
        scanf("%d",&n);
        for(int k = 1; k <= n; k++)
        {
            x=k;
            for(int j=0; j<25&&Prime[j]*Prime[j]<=x; j++)
            {
                c=0;
                while(x%Prime[j]==0)
                {
                    x/=Prime[j];
                    c++;
                }
                if(c>0)
                {
                    A[Prime[j]]+=c;
                }
            }
            if(x>1)
            {
                A[x]++;
            }
        }
        printf("Case %d: %d =",i,n);
        int middle = 0;
        for(int j = 0; j < 100; j++){
            if(A[j]>0){
                if(middle == 1) printf(" *");
                printf(" %d (%d)",j,A[j]);
                middle = 1;
            }
        }
    }
}

