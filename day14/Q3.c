#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size],b[size],c[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        c[i]=a[i]+b[i];
    }


       for (int i = 0; i < size; i++)
    {
        printf("%d, ", c[i]);
        
    }



    return 0;
}
