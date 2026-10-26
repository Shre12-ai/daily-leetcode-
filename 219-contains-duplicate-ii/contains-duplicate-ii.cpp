class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(mpp.count(nums[i])){
                c=i-mpp[nums[i]];
                if(c<=k) return true;
            }
            mpp[nums[i]]=i;
          }
          return false;
     }
};