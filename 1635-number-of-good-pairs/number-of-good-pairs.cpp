class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums){
           map[i]++;
        }
        int total=0;
        for(auto i:map){
          total+=(i.second*(i.second-1))/2;
        } 
        return total;

    }
};