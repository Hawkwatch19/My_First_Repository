#include<stdio.h>
int main(){
    int  number,flag=0;
    printf("Enter a number : ");
    scanf("%d",&number);
    for (int i = 2; i < number/2; i++)
    {
        if (number%i==0)
        {
            printf("%d is not a prime number",number);
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a prime number",number);
    }
    

    return 0;
}