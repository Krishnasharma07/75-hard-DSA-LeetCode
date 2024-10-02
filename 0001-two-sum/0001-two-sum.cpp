class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int i =0;
        int j = nums.size() - 1;
        while( i <= j)
        {
            if( nums[i] + nums[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
                break;
            }
            else if(nums[i] + nums[j] > target)
            {
               j--;
            }
            else
            {
                i++;
            }
        }
        return v;
    }
};