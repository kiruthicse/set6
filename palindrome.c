#include <stdio.h>
#include<conio.h>
#include <string.h>
void main() {
 char s[256];
        int i, j, n, ch, flag;
        printf("Enter your input string:");
        fgets(s, 256, stdin);
        s[strlen(s) - 1] = '\0';
        while (s[i] != '\0') 
        {
               ch = s[i];
                j = i + 1;
                while (s[j] != '\0') 
                {
                   if (s[j] == ch) {
                     n = j;
                   while (s[n] != '\0')
                   {
                      s[n] = s[n + 1];
                       n++;
                     }
                   } 
                   else
                   {
                       j++;
                    }
                }
               i++;
        }

        printf("After removing duplicates: %s\n", s);
        return 0;
  }
