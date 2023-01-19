#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool judge(char *s,int i,int j)
{
    while(i<j)
    {
        if(s[i++]!=s[j--])
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(char * s)
{
    int i;
    int j = strlen(s)-1;
    for(i=0; i<j;++i,--j)
    {
        if(s[i] != s[j])
        {
            return (judge(s,i+1,j) || judge(s,i,j-1));
        }
    }
    return true;
}

int main()
{
    char s[]="abad";
    bool ans=validPalindrome(s);
    ans?printf("true"):printf("false");
    return 0;
    }