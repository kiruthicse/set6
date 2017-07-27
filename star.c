#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
    int i,j;
    int space=0;
    for(i=MAX;i>0;i--)
    {
        for(j=0;j< i;j++)
        {
            printf("*");
        }
        for(j=0;j< space;j++)
        {
            printf(" ");
        }
     
        for(j=0;j< i;j++)
        {
            printf("*");
        }
         
        printf("\n");
        space+=2;
    }

}
