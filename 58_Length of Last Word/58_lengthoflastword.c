#include <stdio.h>
#include <string.h>

int lengthoflastword(char *s)
{
    int top=strlen(s)-1;
    int length=0;
    if(top==0)
    {
        return 1;
    }
        
    while(s[top]==' ')
    {
        top--;
    }
    while(top>0 && s[top]!=' ')
    {
        top--;
        length++;
    }
    return length;  
}
int main()
{
    char s[]="hello world";
    printf("strlen=%d\n",strlen(s));
    printf("sizeof=%d\n",sizeof(s));
    int ans=lengthoflastword(s);
    printf("ans=%d\n",ans);
}