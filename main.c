#include<stdio.h>
int main(){
     int a;
    printf("Enter the number you want multiplication table of : \n");
    scanf("%d",&a);
    for (int j = 1; j <= a; j++)
    {printf("\nMultiplication table of the number%d\n\n",j);
         for ( int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",j,i,j*i);
    }
    }
    return 0;
    }
    
   
