#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

// /*
// 大写变小写、小写变大写 : 字符 ^= 32;

// 大写变小写、小写变小写 : 字符 |= 32;

// 小写变大写、大写变大写 : 字符 &= -33;
// */
// class Solution {
//     public:
//         string toLowerCase(string str) {
//             for(auto &i: str) {
//                 i |= 32 ;
//             }
//             return str;
//         }
// };
// char *toLowerCase(char *s)
// {
//     int len= strlen(s);
//     for (int i=0;i<len;i++)
//     {
//         s[i] = tolower(s[i]);
//     }
//     return s;
// }
// int main()
// {
//     string str;
//     while(getline(cin, str)) {
//         string ans = Solution().toLowerCase(str);
//         string out = (str);
//         cout<< out <<endl;
//     }
// }
class Solution {
public:
    string toLowerCase(string str) {
        for (auto &i : str) {
            i = i| 32;
        }
        return str; 
    }
};

int main() {
    string line;
    while (getline(cin, line)) {
        
        string ans = Solution().toLowerCase(line);

        cout << ans << endl;
    }
    return 0;
}