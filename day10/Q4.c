#include <stdio.h>

int main()
{
    int n,i;
    int a=0,b=1,c;

    printf("enter your choice number:");
    scanf("%d",&n);

    printf("%d %d",a,b);

    for (i=0; i <= n;i++)
    {

        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;

        
    }
    
    
    
        return 0;
}