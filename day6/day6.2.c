#include <stdio.h>

int main()
{

    int valuea;
    printf("enter your value:");
    scanf("%d", &valuea);

    if (valuea < 0)
    {
        printf("your value is nagative:%d", valuea);
    }

   else if (valuea == 0)
    {
        printf("your value is nature:%d", valuea);
    }
    else if (valuea > 0)
    {
        printf("your value is positive :%d", valuea);
    }

    return 0;
}