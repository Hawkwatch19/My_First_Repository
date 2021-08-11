#include<stdio.h>
int main(){

    int no_Of_Rows;
    printf("Number of Rows to be printed \n");
    scanf("%d",&no_Of_Rows);

    int row,colSpaces,colChar;
    for (row = 0; row < no_Of_Rows; row++)
    {
        for ( colSpaces = no_Of_Rows-row; colSpaces >= 1; colSpaces--)
        {
            printf(" ");
        }
        
        int printChar=1;
        int  num=row;
        int den=1;
        for (colChar = 0; colChar <= row; colChar++)
        {
        printf("%d ",printChar);
        printChar=printChar*num;
        printChar=printChar/den;
        num--;
        den++;
        }
    printf("\n");
    }
    return 0;
}
