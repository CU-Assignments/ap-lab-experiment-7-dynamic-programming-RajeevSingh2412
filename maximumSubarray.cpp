class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int ans=INT_MIN;
            int temp=0;
    
            for(auto i:nums){
                temp+=i;
                ans=max(temp,ans);
                if(temp<0){
                    temp=0;
                }
            }
            return ans;
        }
    };