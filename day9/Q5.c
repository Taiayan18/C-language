#include <stdio.h>

int main()
{
    int n,r;
    printf("Enter your number:");
    scanf("%d",&n);

    printf("Enter your number:");
    scanf("%d",&r);
    while (n <= r)
    {
        if(n % 4  ==0)
        {
            printf("%d ",n);
        }

        n++;
    }
    

    return 0;
}