#include<stdio.h>
int main(){
    int select;
    printf("1. Length\n2. Area\n3. Volume\n4. Mass\n5. Velocity\n6. Pressure\n7. Energy\n8. Power\n9. Temperature\n10. Chemistry\n\n Select: ");
    scanf("%d",&select);


    if (select==1) //L e n g t h 
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
    if(select==2)
    {

    }
    if (select==3)
    {
        /* code */
    }
    if (select==4)
    {
        /* code */
    }
    if (select==5)
    {
        /* code */
    }
    if (select==6)//p r e s u r e
    {
         printf("\n1. atm => Pa       2. Pa => atm\n3. atm => mmHg     4. mmHg => atm\n\nSelect a number:  ");
    int num;
    scanf("%d",&num);
        if (num==1)
    {
         int no_1;
        printf("\nEnter the quantity:");
        scanf("%d",&no_1);
        float No_1= no_1*101325.000;
        printf("%d atm = %.3f Pa",no_1,No_1);
    }
        else if (num==2)
        {
             int no_2;
        printf("\nEnter the quantity:");
        scanf("%d",&no_2);
        float No_2= no_2/101325.000;
        printf("%d Pa = %.10f atm",no_2,No_2);
        }
        else if (num==3)
        {
             int no_3;
        printf("\nEnter the quantity:");
        scanf("%d",&no_3);
        float No_3= no_3*760.000;
        printf("%d atm = %.3f mmHg",no_3,No_3);
        }
        else if (num==4)
        {
             int no_4;
        printf("\nEnter the quantity:");
        scanf("%d",&no_4);
        float No_4= no_4/760.000;
        printf("%d mmHg = %.8f atm",no_4,No_4);
        }
        
    }
    if (select==7)
    {
        /* code */
    }
    if (select==8)
    {
        /* code */
    }
    if (select==9)
    {
        /* code */
    }
    if (select==10)
    {
        /* code */
    }
    
    
    return 0;
}