#include <stdio.h>

int main()
{

    int a;
    printf("enter your fist value ");
    scanf("%d", &a);

    int b;
    printf("enter your secound value ");
    scanf("%d", &b);

    int c;
    printf("enter your third value ");
    scanf("%d", &c);


  if( a< b){
    if (a < c){
        printf("your fist number is minimum %d ",a);
    }
    else{
        printf(" your third number is minimum %d ",c);
    }
  }

  else
  {
    if (b<c)
    { printf ("tour second number is minimum %d ",b);
    }
    else{
        printf("your third number is minimum %d",c);
    }
  }
  
    return 0;
}