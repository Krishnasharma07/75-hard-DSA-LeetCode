class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          int count = 0;
        int prefix = 0;
      
        unordered_map<int,int> m;
          m[0] = 1;
        for(int i =0; i<nums.size(); i++)
        {
            prefix += nums[i];
            int remain = prefix - k;
            count += m[remain];
            m[prefix] += 1;
        }
        return count;
    }
};