class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size();
        long long front=0;
        long long end=0;
       for(int i=0;i<n;i++)
       {
        if(nums[i]==0)
        {
          front++;
        }
        else
        {
            end+=front*(front+1)/2;
            front=0;
        }
       }
           end+=front*(front+1)/2; 
        

       
       return end;
       

        
    }
};