class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i = 0; i< nums.size(); i++){
            if(hash.contains(nums[i])){
                return true;
            }
            hash.insert(nums[i]);
        }
        return false;
    }
};