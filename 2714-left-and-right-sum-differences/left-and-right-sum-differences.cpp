class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
       for(auto i: nums){
          sum+=i;
       }
       int rightsum=0,leftsum=0;
       vector<int> ans(n);
       for(int i=0;i<n;i++){
         rightsum=sum-leftsum-nums[i];
         ans[i]=abs(rightsum-leftsum);
         leftsum+=nums[i];
       }
       return ans;
        }

};