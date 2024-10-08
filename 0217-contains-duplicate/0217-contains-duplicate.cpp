class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0 || nums.size()==1)
        return false;
        unordered_map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto itr : mp)
        {
            if(itr.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};