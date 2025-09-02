#include <stdio.h>

int main()
{

//   int square;
 int radius;
   printf("enter the redius of the square: ");
   scanf("%d",&radius);
  int square = radius*radius;
   printf("the area of the square with redius %d is: %d\n",radius,square);

    return 0;
}