#include<stdio.h>

int main()
{
    int a,i,z;
    printf("Enter the number you want multiplication table of : \n");
    
    scanf("%d",&a);
    printf("Table of %d:\n",a);
    for ( i = 1; i <=10; i++)
    {
        z = a*i;
        printf("%d x %d = %d\n",a,i,z);
    }
    return 0;
}
