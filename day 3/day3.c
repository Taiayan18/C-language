#include <stdio.h>

int main()
{

    int Addition = 12;
    int num = 6;
    int result = Addition + num;
    int sub3 = Addition - num;
    int mult3 = Addition * num;
    int div3 = Addition / num;
    int multiply = 5;
    int multiply3 = multiply * multiply;

    printf("Addition of  12 and 6 is 18\n");
    printf("  %d + %d = %d \n", Addition, num, result);
    printf("\n");
    printf("sub of  12 and 6 is 6\n");
    printf("  %d - %d = %d \n", Addition, num, sub3);
     printf("\n");
    printf("multiply of  12 and 6 is 72\n");
    printf("  %d * %d = %d \n", Addition, num, mult3);
     printf("\n");
    printf("divaeid of  12 and 6 is 2\n");
    printf("  %d / %d = %d \n", Addition, num, div3);
     printf("\n\n");
    printf("--------------\n");
    printf("|            |\n");
    printf("| %d x %d = %d | \n", multiply, multiply, multiply3);
    printf("|            |\n");
    printf("--------------\n");

    return 0;
}