#include <stdio.h>

int main()
{

    int invoice, service;

    printf("prees 1 for english\n");
    printf("Press 2 for hindi\n");
    printf("preess 3 for gujrati\n");
    printf("Enter your choice:");
    scanf("%d", &invoice);

    switch (invoice)
    {

        case 1:
        
        printf("press 1 for internet recharge\n");
        printf("press 2 for Top-up recharge\n");
        printf("press 3 for special recharge\n");
        printf("enter your choice:");
        scanf("%d",&service);

         switch(service){

            
        case 1:printf("you have seccesfully internet recharge \n");break;
        case 2:printf("you have seccesfully top-up recharge \n");break;
        case 3:printf("you have seccesfully special recharge \n");break;
        default:
        printf("invalid recharge\n ");break;

        }

        break;


        case 2:
        
        printf("\nInternet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Apna choise dijiye:");
        scanf("%d",&service);

         switch(service){

            
        case 1:printf("\nAapne Safalta se Internet Recharge kar liya hai.\n");break;
        case 2:printf("\nAapne safalta se Top-up Recharge kar liya hai.\n");break;
        case 3:printf("\nAapne Safalta se Special Recharge KAr liys hai. \n");break;
        default:
        printf("\nGalat Seva Choice!\n ");break;

        }

         break;


         case 3:
        
        printf("\nInterner Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 1 dabavo\n");
        printf("Tamaro choice nakho:");
        scanf("%d",&service);

         switch(service){

            
        case 1:printf("\nTamane safalta purvak Internet Recharge karyu che.\n");break;
        case 2:printf("\nTamane safalta purvak Top-up Recharge karyu che.\n");break;
        case 3:printf("\nTamane safalta purvak Special Recharge karyu che. \n");break;
        default:
        printf("\nKhotu Service Choice!\n ");break;

        }

        break;


        default:
        printf("invalid language");

    }



       

    return 0;
}