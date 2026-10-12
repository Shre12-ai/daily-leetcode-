class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1size=s1.size(); int s2size=s2.size();
         if(s1size>s2size) return false;
         vector<int> s1count(26,0); vector<int> s2count(26,0);
         for(int i=0;i<s1size;i++)
         {
           s1count[s1[i]-'a']++;
           s2count[s2[i]-'a']++;
         }
         if(s1count==s2count) return true;
         for(int i=s1size;i<s2size;i++)
         {
            s2count[s2[i]-'a']++;
            s2count[s2[i-s1size]-'a']--;
         
         if(s1count==s2count)
         {
            return true;
         }
         }
         return false;
    }
    
};