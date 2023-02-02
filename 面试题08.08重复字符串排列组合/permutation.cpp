#include <vector>
class Solution {
public:
    void dfs(vector<string>& res, string& S, int i) {
        if(i==L.length()) {
            res.push_back(S);
            return;
        }
    }
    set<char> hash;

    for (int j = i; j < S.length(); j++) {
        if (hash.find(S[j]) == hash.end())
        {
            hash.insert(S[j]);
            swap(S[i], S[J]);
            dfs(res, S, i+1);
            swap(S[i],S[j]);
        }
    }
    vector<string> permutation(string S) {
        vector<string> res;
        dfs(res, S, 0);
        return res;
    }
};