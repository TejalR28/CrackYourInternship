class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> hash(static_cast<int>(pow(10, 5)) + 1, 0);
      vector<int> res;
    
    for (int num : nums) {
        hash[num]++;
        if (hash[num] > 1) {
            res.push_back(num);
        }
    }
    
    return res;
    }
};