class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> map(26,0);
        for(auto i: magazine){
            map[i-'a']++;
        }
        for(auto i:ransomNote){
            if(map[i-'a']>0){
                map[i-'a']--;
            }
            else{
                return false;
            }
         }
         return true;
        
    }
};