class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>arr;
        for(int i=0;i<max(n,m);i++)
        {
        
            if(i<m)
            {
           arr.push_back(nums1[i]);
            }
            if(i<n)
            {
           arr.push_back(nums2[i]);
            }
        }
        sort(arr.begin(),arr.end());
        nums1=arr;
        
    }
};