#include<stdio.h>
int main(){
    int select;
    printf("1. Length\n2. Area\n3. Volume\n4. Mass\n5. Velocity\n6. Pressure\n7. Energy\n8. Power\n9. Temperature\n10. Chemistry\n\n Select: ");
    scanf("%d",&select);


    if (select==1) //Length er converter
    {
       printf("\n1. inch => cm      2. cm => inch\n3. ft => m         4. m=> ft\n5. mile => km      6. km => mile\n\nSelect a number:  ");
    int num;
    scanf("%d",&num);

    if (num==1)
    {
        int no_1;
        printf("\nEnter the quantity:");
        scanf("%d",&no_1);
        float No_1= no_1*2.54;
        printf("%d inch = %.3f cm",no_1,No_1);
        
    }
    else if (num==2)
    {
        int no_2;
        printf("\nEnter the quantity:");
        scanf("%d",&no_2);
        float No_2= no_2/2.54;
        printf("%d cm = %.3f inch",no_2,No_2);
        
    }
    else if (num==3)
    {
        int no_3;
        printf("\nEnter the quantity:");
        scanf("%d",&no_3);
        float No_3= no_3/3.281;
        printf("%d ft = %.3f m",no_3,No_3);
        
    }
    else if (num==4)
    {
        int no_4;
        printf("\nEnter the quantity:");
        scanf("%d",&no_4);
        float No_4= no_4*3.281;
        printf("%d m = %.3f ft",no_4,No_4);
        
    }
    else if (num==5)
    {
        int no_5;
        printf("\nEnter the quantity:");
        scanf("%d",&no_5);
        float No_5= no_5*1.609;
        printf("%d mile = %.3f km",no_5,No_5);
        
    }
    else if (num==6)
    {
        int no_6;
        printf("\nEnter the quantity:");
        scanf("%d",&no_6);
        float No_6= no_6/1.609;
        printf("%d km = %.3f mile",no_6,No_6);
        
    }
    }
    
    
    return 0;
}