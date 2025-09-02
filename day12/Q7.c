#include <stdio.h>

int main()
{

    char ch='E';

    for(int i='A'; i<='E'; i++){
        for (int j = i; j >= 'A'; j--)
        {
        
            printf("%c  ",j);
        }

        printf("\n");

        
    }



    return 0;
}