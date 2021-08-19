#include<stdio.h>
int main(){
    int days,day, month, year;
    printf("What is your age(in Days) : ");
    scanf("%d",&days);
    year = days / 365;
    month = (days%365)/30;
    day = (days%365)%30; 
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year, month, day);
    return 0;
}