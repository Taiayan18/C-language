#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str); 

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;  
            break;
        }
    }

    if (flag == 1)
        printf("The given string is a Palindrome.\n");
    else
        printf("The given string is not a Palindrome.\n");

    return 0;
}