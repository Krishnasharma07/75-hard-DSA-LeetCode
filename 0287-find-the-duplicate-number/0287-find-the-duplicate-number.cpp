class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(int i : nums)
       {
         mp[i]++;
       } 
       int ans = -1;
       for(auto itr : mp)
       {
        if(itr.second > 1)
        {
            ans = itr.first;
            break;
        }
       }
       return ans;
    }
};