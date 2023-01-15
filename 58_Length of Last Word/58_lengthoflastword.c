#include <stdio.h>
#include <string.h>

int lengthoflastword(char *s)
{
    int n=strlen(s);
    //char *p=s;
    int k=0;
    if(n==1)
    {
        return 1;
    }
    for (int i=n-1;i>=0;i--)
    {
        if(*(s+i)!=' ')
        {
            k++;
        }
        else if(k>0 && *(s+i)==' ')
        {
            break;
        }
    }
    return k;
 
}
int main()
{
    char s[]="hello ";
    int ans=lengthoflastword(s);
    printf("ans=%d\n",ans);
}