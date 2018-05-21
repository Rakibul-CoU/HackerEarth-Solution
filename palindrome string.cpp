#include <bits/stdc++.h>
using namespace std;
int main()
{
    char input[100];
    int i, length, l, isPalindrome = 1;
    scanf("%s", input);
    length = strlen(input);
    l = length/2;
    for (i = 0; i < l; i++)
    {
        if (input[i] != input[length-i-1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
