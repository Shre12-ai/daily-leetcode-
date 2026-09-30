class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int m=-1;
        for(auto i: arr)
        {
           mpp[i]++;
        }
        for(auto i: mpp)
        {
            if(i.first==i.second)
                m=max(i.first,m);
        }
        return m;
    }
};