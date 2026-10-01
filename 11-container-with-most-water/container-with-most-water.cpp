class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int m=0;
        int left=0;
        int right=n-1;
       while(left<right)
       {
        int width=right-left;
        int h=min(height[left],height[right]);
        m=max(m,h*width);
        if(height[left]>height[right])
        {
            right--;
        }
        else
        {
            left++;
        }
       }
       return m;
    }
};