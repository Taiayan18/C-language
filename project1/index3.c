#include <stdio.h>

int main()
{
    int first;
    printf(" Enter your First angle value: ");
    scanf("%d",&first);

        int second;
    printf(" Enter your second angle value: ");
    scanf("%d",&second);

    int result= 180-(first+second);
    printf("yout tringle angle value:%d",result);

    return 0;
}