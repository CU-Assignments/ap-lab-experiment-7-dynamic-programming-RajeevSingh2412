class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
             vector<int> dp(amount+1,-1);
             dp[0]=0;
             int n=coins.size();
             int ans= solve(coins,amount,n,dp);
             if(ans==INT_MAX){
                return -1;
             }
             else{
                return ans;
             }
        }
    
        int solve(vector<int>& coins,int x,int n,vector<int>& dp){
            if(x==0){
                return 0;
            }
            if(x<0){
                return INT_MAX;
            }
            if(dp[x]!=-1){
                return dp[x];
            }
            int mini=INT_MAX;
            for(int i=0;i<n;i++){
                int ans=solve(coins,x-coins[i],n,dp);
                if(ans!=INT_MAX){
                    mini=min(mini,ans+1);
                }
    
            }
            
            dp[x]=mini;
            return mini;
    
        }
    };