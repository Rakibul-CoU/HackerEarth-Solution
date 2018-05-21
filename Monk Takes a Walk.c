#include<stdio.h>
int main()
{
    int t, i, n, k, count=0;
    char st[100010];
    scanf("%d", &t);
    while(t--)
    {
        count=0;
        scanf("%s", st);
        k=strlen(st);
        for(i=0; i<k; i++)
        {

            if(st[i]=='A' || st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'||st[i]=='a' || st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
             count++;
        }
        printf("%d\n", count);
    }
}
