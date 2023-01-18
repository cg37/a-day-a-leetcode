#include <stdio.h>
#include <string.h>
int main()
{
    char arr[26];
    memset(arr,0,sizeof(arr));
    printf("sizeof(arr)=%d\n",sizeof(arr));
    printf("hello World");
    return 0;
}