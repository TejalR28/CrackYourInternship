class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>res;
        
        unordered_map<string,vector<string>> mp;

        for (const auto& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }

        for (const auto& entry : mp) {
            res.push_back(entry.second);
        }

        return res;  
    }
};