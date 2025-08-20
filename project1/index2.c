#include <stdio.h>

int main()

{

    int HRA;
    printf("enter your HRA value:");
    scanf("%d",&HRA);

      int DA;
    printf("enter your DA value:");
    scanf("%d",&DA);

      int PA;
    printf("enter your PA value:");
    scanf("%d",&PA);

    int result=100+HRA+DA+PA;

    printf(" Your total Gross salary:%d",result);


    return 0;
}