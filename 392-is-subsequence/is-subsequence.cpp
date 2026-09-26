class Solution {
public:
    bool isSubsequence(string s, string t) {
        int curr=0;
        if(s.empty()==true)
        return true;
        for(int i=0;i<t.size();i++)
        {
            if(s[curr]==t[i])
            {
                curr++;
            }
            if(curr==s.size())
            {
                return true;
                break;
            }
           
        }
        return false;
    }
};