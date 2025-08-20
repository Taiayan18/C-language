#include <stdio.h>

int main()
{
    float ff;
    float c;

    printf("enter the your multiple celsiance:");
    scanf("%f", &c);
    
    float value = (c * 9 / 5) + 32;

    printf("%f", value);

    return 0;
}