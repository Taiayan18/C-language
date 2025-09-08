#include <stdio.h>


int main()
{
    int size;
    float s=0;

    printf("Enter array size: ");
    scanf("%d",&size);

    int a[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        s+=a[i];
    }

    float result=s/size;

    printf("Length of an Array: %f\n",result);

    return 0;
}
