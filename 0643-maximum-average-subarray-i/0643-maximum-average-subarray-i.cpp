class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum  = 0;
        double avg =0;
        for(int i =0; i<k; i++)
        {
            sum += nums[i];
        }
        avg = sum / k;
       double maxi = avg;
        int i =0;
        int j = k;
        
        while( j < nums.size())
        {
            sum -= nums[i];
            sum += nums[j];
            i++;
            j++;
            avg = sum / k;
            if( avg > maxi)
            {
                maxi = avg;
            }

        }
        return maxi;
    }
};