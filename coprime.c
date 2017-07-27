#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,a,b,c;
clrscr();
printf("\n enter the two no decesending order ");
scanf("%d%d",&n1,&n2);
b=n1;
c=n2;
while(n2!=0)
{
a=n1%n2;
n1=n2;
n2=temp;
}
if(n1==1)
printf("\n the %d and %d is co-prime",b,c);
else
printf("\n the %d and %d is not co-prime",b,c);
getch();
}
