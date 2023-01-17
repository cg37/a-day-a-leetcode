#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool stringIsMatch(char*s, int len, char *vat)
{
    int i;
    char arr[26];
    memset(arr,0,sizeof(arr));
    int temp=0;

    for (int i=0;i<len;i++)
    {
        temp=s[i]-'a';
        arr[i]++;
    }
    for(int i=0;i<26;i++)
    {
        if (vat[i] != arr[i])
        {
            return false;
        }
    }
    return true;

}
int *findAnagrams(char *s, char* t,int *returnSize)
{
    int len_s=strlen(s);
    int len_t=strlen(t);
    int *ans;

    char vat[26];
    memset(vat,0,sizeof(vat));

    int i;
    int temp=0;

    *returnSize = 0;
    int *returnNums=(int *)malloc(sizeof(int) *strlen(s));
    if(strlen(s)<strlen(t))
    {
        return returnNums;
    }
    for(i=0;i<strlen(t);i++)
    {
        temp=t[i]-'a';
        vat[temp]++;
    }
    for(i=0;i<=(len_s-len_t);i++)
    {
        if(stringIsMatch(s+i,strlen(t),vat))
        {
            returnNums[*returnSize]=i;
            *returnSize = *returnSize+1;
        }
    }
    return returnNums;
}
int main()
{
    char s[]="cbaebabacd";
    char t[]="abc";

     printf("test");

    int *returnSize=(int*)malloc(sizeof(int));
    int *ans;
    ans = findAnagrams(s,t,returnSize);
    for(int i=0; i < *returnSize ; i++)
    {
        printf("%d\n",ans[i]);
        //printf("test");
    }
    printf("test");
    return 0;
}

