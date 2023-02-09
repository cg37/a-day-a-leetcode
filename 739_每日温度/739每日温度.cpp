#include <iostream>
#include <vector>
using namespace std;
// 一个非常牛逼的暴力解法
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        for(int i=n - 2; i >= 0; i--){
            int j=i + 1;
            while(temperatures[i]>=temperatures[j]&&ans[j]){
                j= j + ans[j];
            }
            if(temperatures[i]>=temperatures[j]) {
                ans[i] = 0;
            }
            else{
                ans[i] = j - i;
            }
        }
        return ans;
    }
};