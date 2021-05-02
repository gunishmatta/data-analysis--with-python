5746. Minimum Distance to the Target Element

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
       
        int n = nums.size();
        
        int minabs =INT_MAX;
        
        for(int i=0;i<n;i++)
        {
        
            if(nums[i]==target)
            {
            int abss = abs(i-start);
                
                if(abss<minabs)
                {
                    minabs = abss;
                }
                
            }
        }
        
        return minabs;
        
    }
};
