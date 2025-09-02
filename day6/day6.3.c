#include <stdio.h>

int main()
{

    float maths;
    printf("Enter your maths mark:");
    scanf("%f",&maths);

     float english;
    printf("Enter your english mark:");
    scanf("%f",&english);

     float science;
    printf("Enter your science mark:");
    scanf("%f",&science);

    float total = maths+english+ science;
    

   printf("enter your everage marks%f\n", total  );
    printf("enter your everage marks%f\n", total /3 );
    

    return 0;
}