#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,fact,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}
