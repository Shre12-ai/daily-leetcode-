class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(auto w: strs)
        {
            string key=w;
            sort(key.begin(),key.end());
            mpp[key].push_back(w);
        }
        vector<vector<string>> result;
        for(auto r: mpp)
        {
            result.push_back(r.second);
        }
        return result;

        
    }
};