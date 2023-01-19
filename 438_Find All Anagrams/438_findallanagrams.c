#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void CharFreq(char *s,int left,int right,int *freq)//字段s中各个字母出现的次数
{
    for(int i=left;i<=right;i++)
    {
        freq[s[i]-'a']++;
    }
}

bool StringCmp(int *s,int *p,int len)//len:数组大小
{
    for(int i=0;i<len;i++)
    {
        if(s[i]!=p[i])
        {
            return false;
        }
    }
    return true;
}
int *findAnagrams(char * s, char * p, int* returnSize)
{
    int len_s=strlen(s);
    int len_p=strlen(p);
    if(len_s<len_p)
    {
        *returnSize=0;
        return NULL;
    }

    int *res;
    res=(int *)malloc(sizeof(int)*(len_s-len_p+1));
    int count=0;

    int pFreq[26];
    memset(pFreq,0,sizeof(pFreq));

    CharFreq(p,0,len_p-1,pFreq);
    int sFreq[26];
    for(int i=0;i<len_s-len_p+1;i++)
    {
        memset(sFreq,0,sizeof(sFreq));
        CharFreq(s,i,i+len_p-1,sFreq);
        if(StringCmp(pFreq,sFreq,26)==true)
        {
            res[count++]=i;
        }
    }
    *returnSize = count;
    return res;
}

int main()
{
    char s[]="bacebabacdacbca";
    char t[]="abc";

    int *returnSize;
    returnSize = (int*) malloc(sizeof(int)*strlen(s)); 
    int *ans;
    ans = findAnagrams(s,t,returnSize);
    for(int i=0; i < *returnSize ; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}

