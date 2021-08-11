/*How many multiplication table you want? 
It will show "1 to x" all multiplication table. */
#include<stdio.h>
int main(){
     int x;
    printf("Enter a  number : ");
    scanf("%d",&x);
    for (int j = 1; j <= x; j++)
    {printf("\nMultiplication table of %d\n\n",j);
         for ( int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",j,i,j*i);
    }
    }
    return 0;
    }
    
   
