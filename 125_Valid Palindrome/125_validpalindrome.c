#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char * s)//A 65,a   97
{
    int i=0,j=0;

    while(s[i])
    {
        if(s[i]>=48 && s[i]<=57)
        {
            s[j++]=s[i];
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            s[j++]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[j++]=s[i];
        }
        i++;
    }
    int left=0;
    int right=j-1;
    while(left<right)
    {
        if(s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
        }
    return true;
}
int main()
{
    char s[]="trace a car";
    bool ans=isPalindrome(s);
    ans?printf("true"):printf("false");
    return 0;
    }