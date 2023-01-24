#include <stdio.h>
//  1阶     1
//  2阶     2
//  3阶     1+2 
//  4阶     2+3
//dp[i] 达到i阶有dp[i]种方法
//dp[i] = dp[i-1] + dp[i-2];
int climbing_stairs(int n) {
    int dp[50] = {1};
    for(int i=0; i<10; i++)
    if (n <= 1)
    {
        return 1;
    }
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main() {
    int n = 7;
    int res = climbing_stairs(n);
    printf("res = %d\n", res);
}