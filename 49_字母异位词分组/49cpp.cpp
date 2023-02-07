#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
/*
给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。
字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector <string>> ans;            //二维数组字符串
        unordered_map<string, vector<string>> record;  //哈希法 unordered_map record;
        for(int i = 0; i<strs.size();i++) {     //遍历入参strs
            string key = strs[i];               
            sort(key.begin(),key.end());      //升序排列 bca,cab=>abc;
            record[key].push_back(strs[i]);     //去重
        }
        for(auto i = record.begin();i!=record.end();i++) {
            ans.push_back(i->second);
        }
    }
};