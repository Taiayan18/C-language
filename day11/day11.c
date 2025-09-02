#include <stdio.h>

int main()
{
    int n,i,value=0;

    printf("enter your value:");
    scanf("%d",&n);


    for(int i=1; i<=n; i++)
    {
        value +=i;

    }

    printf("your values%d",value);


    return 0;
}