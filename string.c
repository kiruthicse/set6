 
#include <stdio.h>
#include <string.h>
void  main()
{
    char s[100], reverse[100];
    int len, i, index, wordStart, wordEnd;
 
    printf("Enter any string: ");
    gets(s);
 
    len   = strlen(s);
    index = 0;

    wordStart = len - 1;
    wordEnd  = len - 1;
 
    while(wordStart > 0)
    {
        if(s[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = s[i];
 
                i++;
                index++;
            }
            reverse[index++] = ' ';
 
            wordEnd = wordStart - 1;
        }
 
        wordStart--;
    }
 
 
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = s[i];
        index++;
    }
    reverse[index] = '\0'; 
 
    printf("Original string \n%s\n\n", s);
    printf("Reverse ordered words \n%s", reverse);
    return 0;
}
