//1/2+1/4+1/8+.........+1/x
//Enter a number(n) which will be count as x=2^n

/*Because of memory shortage after a time you will get 1 as an answer. 
Otherwise you will never get 1 as an answer.*/

#include <stdio.h>
#include <math.h>
int main(){
    double sum =0.00;
    float n,m;
    printf("Tell me how many terms you want to see the sum: ");
    scanf("%f",&n);
    m = pow(2.0,n);
           for (float i = 2; i <= m; i*=2)
    {
        sum = 1/i + sum;
        printf("1/%.1f + ",i); 
    }
     printf(".....\nresult = %lf", sum); 
    return 0;
}
