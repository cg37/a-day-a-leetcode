#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool repeatSubstringPattern(char *s) {
    int len = strlen(s);
    for(int i = 1; i <= len-3; i++) {
        for(int j = i + 3; j<len; j++) {
                if(s[j] == s[i] && s[j+1] == s[i+1] && s[j+2] == s[i+2]) {
                    return false;
                }
            }
        }
    return true;
}
int main() {
    char pwd[]="398h$720CD0h&7f9~A403mex~lu#$*0+0CD0";
    repeatSubstringPattern(pwd)?printf("true"):printf("false");
}