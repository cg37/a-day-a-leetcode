#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *toLowerCase(char *s)
{
    int len= strlen(s);
    for (int i=0;i<len;i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main()
{
    int i=0;
    char str[]="ASDFGHJK";
    while(str[i])
    {
        putchar(*toLowerCase(str+i));
        i++;
    }
}


