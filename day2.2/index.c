#include <stdio.h>

int main()
{

    float PI = 3.14;
    float redius;
    printf("enter the redius of the circle: ");
    scanf("%f", &redius);
    float area = PI * redius * redius;
    printf("the area of the circle with redius %f is: %f\n", redius, area);

    return 0;
}