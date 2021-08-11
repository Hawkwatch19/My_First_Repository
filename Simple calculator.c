#include<stdio.h>
int main()

{
    float  a,b,r;
    char ch;
    scanf("%c%f%f",&ch,&a,&b);
    switch(ch)
    {
        case '+':
        r=a+b;
        printf("%f + %f = %f",a,b,r);
        break;
        case '-':
        r=a-b;
        printf("%f - %f = %f",a,b,r);
        break;
        case '*':
        r=a*b;
        printf("%f * %f = %f",a,b,r);
        break;
        case '/':
        r=a/b;
        printf("%f / %f = %f",a,b,r);
        break;

        default:
        printf("write like this\n+\n6\n4\n\n\nThank You");
    }
}
