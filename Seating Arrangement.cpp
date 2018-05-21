#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long t ;
    int n,j,s, p,q,i;
    scanf("%lu", &t);
    for( i=0; i<t; i++)
    {
        scanf("%d",&n);
        p=n%12;
        q=n%6;
        if(p>6 || p==0)
        {
            if(q==0) n-=11;
            for( j=1; j<6; j++)
            {
                if (q==j)
                    n=n-(2*j-1);
            }
        }
        else if (p>=1 && p<=6)
        {
            if(q==0) n+=1;
            for (j=1; j<6; j++)
            {
                if(q==j)
                    n=n+(13-2*j);
            }
        }
        switch (q)
        {
        case 0:
            printf("%d WS",n);
            break;
        case 1:
            printf("%d WS",n);
            break;
        case 2:
            printf("%d MS",n);
            break;
        case 3:
            printf("%d AS",n);
            break;
        case 4:
            printf("%d AS",n);
            break;
        case 5:
            printf("%d MS",n);
            break;
        default:
            break;
        }
        printf("\n");
    }

    return 0;

}
