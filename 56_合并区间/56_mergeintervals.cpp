#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
class Solution {
public:
    std::vector<std::vector<int>> merge_vec(std::vector<std::vector<int>> & intervals) {
        std::vector<std::vector<int>> ans;  //二维数组ans
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (int i = 1; i<intervals.size(); i++) {
            if (intervals[i][0] > end) {
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            } else {
                {
                    end = max(end, intervals[i][1]);
                }
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};