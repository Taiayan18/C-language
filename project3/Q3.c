#include<stdio.h>
int main(){
    int num, firstDigit, lastDigit, sum;

    printf("enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while(firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of first and last digit: %d\n", sum);

    return 0;
}