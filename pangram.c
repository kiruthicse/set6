#include<stdio.h>
void main()
{
    char c[100];
    int i,used[26]={0},tot=0;
    clrscr();
     
    printf("\n Enter the String:\n");
    gets(c);
     
    for(i=0;c[i]!='\0';i++)
    {
        if('a'<=c[i] && c[i]<='z')
        {
            total+=!used[c[i]-'a'];
            used[c[i]-'a']=1;
        }
        else if('A'<=c[i] && c[i]<='Z')
        {
            total+=!used[c[i]-'A'];
            used[c[i]-'A']=1;
        }
    }
     
    if(total==26)
    {
        printf("\n The Entered String is a Pangram String.");
    }
    else
    {
        printf("\n The Entered String is not a Pangram String.");
    }
    getch();
}
