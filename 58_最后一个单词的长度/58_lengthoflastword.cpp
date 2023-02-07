#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=n-1; i>=0;i--) {
            if(s[i] != ' ') {
                ans++;
            } else if(ans>0 && s[i]==' ') {
                break;
            }
        }
        return ans;
    }
};


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
    string s;
    while(getline(cin,s)) {
        int ans = Solution().lengthOfLastWord(s);
        cout<<ans<<endl;
    }
    return 0;


    // c
    // char s[]="hello ";
    // int ans=lengthoflastword(s);
    // printf("ans=%d\n",ans);
}