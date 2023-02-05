#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector <string>> ans;
        unordered_map<string, vector<string>> record;
        for(int i = 0; i<strs.size();i++) {
            string key = strs[i];
            sort(key.begin(),key.end());
            record[key].push_back(strs[i]);
        }
        vector<vector <string>> ans;
        for(auto it = record.begin();it!=record.end();it++) {
            ans.push_back(it->second);
        }
    }
};