class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
       
        int n = candies.size();
         vector<bool> flag(n,false);
        for(int i=0; i<n; i++)
        {
            if(max < candies[i] )
            {
                max =  candies[i];
            }
        }
        for(int i =0; i<n; i++)
        {
            if(candies[i] + extraCandies >= max)
            {
               flag[i] = true;
            }
        }
        
        // vector<bool> *ans = flag;
        return flag;
    }
};