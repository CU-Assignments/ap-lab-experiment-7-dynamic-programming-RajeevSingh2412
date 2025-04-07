class Solution {
    public:
        int maxProduct(vector<int>& arr) {
            int ans=INT_MIN;
            int left=1;
            int right=1;
            int n=arr.size();
            for(int i=0;i<n;i++){
               if(left==0){
                   left=1;
               }
               if(right==0){
                   right=1;
               }
               left*=arr[i];
               right*=arr[n-1-i];
               
               ans=max(max(left,right),ans);
            }
            return ans;
        }
    };