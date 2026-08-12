class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> map;
           int c=0;
           int j=0;
           int left=0;
        for(int i=0;i<nums.size();i++)
        {
                map[nums[i]]++;
                c++;
           while(map[nums[i]]>k)
        { 
           map[nums[left]]--;
           c--;
           left++;
           
        }
        j=max(c,j);
        }
        return j;

    }
};