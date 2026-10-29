class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double average;
        double maxavg;
        for(int i=0;i<k;i++){
            sum+=nums[i];        
            }
            average=sum/k;
        if(k==n) return average;
        maxavg=average;
        for(int i=1;i<=n-k;i++){
            sum=sum+nums[i+k-1]-nums[i-1];
            average=sum/k;
           maxavg=max(maxavg,average);
        }
        return maxavg;
        
    }
};