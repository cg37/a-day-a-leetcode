#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int compare_anagram(const void*a, const  void *b)
{
    char a1=*(char*)a;
    char b1=*(char*)b;
    return a1-b1;

}
bool isAnagram(char *s,char *t)
{
    int len_s=strlen(s);
    int len_t=strlen(t);
    if( len_s!= len_t)
    {
        return false;
    }
    qsort(s,len_s,sizeof(char),compare_anagram);
    qsort(t,len_t,sizeof(char),compare_anagram);
    return strcmp(s,t)==0;//strcmp,字符串相等时返回0；
}
bool isAnagram_1(char *s, char *t)
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    if(len_s != len_t)
    {
        return 0;
    }
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<len_s;i++)
    {
        arr[s[i]-'a']++; 
    }
    for(int i=0;i<len_t;i++)
    {
        arr[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[]="anagram";
    char arr_1[]="nagaram";
    bool ans = isAnagram(arr,arr_1);
    printf("qsort:");
    isAnagram(arr,arr_1)?printf("true\n"):printf("false\n");
    printf("Hash:");
    isAnagram_1(arr,arr_1)?printf("true\n"):printf("false\n");
}