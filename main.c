#include<stdio.h>
#include<math.h>
int main(){
    float taka;
   scanf("%f",&taka);
    int R1 = taka / 100;
    int R2 = fmod(taka,100)/50;
    int R3 = fmod(fmod(taka,100),50)/20;
    int R4 = fmod(fmod(fmod(taka,100),50),20)/10;
    int R5 = fmod(fmod(fmod(fmod(taka,100),50),20),10)/5;
    int R6 = fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5)/2;

    int r1 = fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2)/1.00;
    int r2 = fmod(fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2),1.00)/0.50;
    int r3 = fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2),1.00),0.50)/0.25;
    int r4 = fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2),1.00),0.50),0.25)/0.10;
    int r5 = fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2),1.00),0.50),0.25),0.10)/0.05;
    int r6 = fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(taka,100),50),20),10),5),2),1.00),0.50),0.25),0.10),0.05)/0.01;

    printf("NOTAS:\n%d notas de R$ 100.00\n%d notas de R$ 50.00\n%d notas de R$ 20.00\n%d notas de R$ 10.00\n%d notas de R$ 5.00\n%d notas de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",R1,R2,R3,R4,R5,R6,r1,r2,r3,r4,r5,r6);

    return 0;
}