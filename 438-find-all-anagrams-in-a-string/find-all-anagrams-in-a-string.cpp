class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> result;
        int slen=s.size(); int plen=p.size();
        if(plen>slen) return result;
        vector<int> windowcount(26,0); vector<int> pcount(26,0);
        for(int i=0;i<plen;i++)
        {
            windowcount[s[i]-'a']++;
            pcount[p[i]-'a']++;
        }
        if(windowcount==pcount) result.push_back(0);

        for(int i=plen;i<slen;i++)
        {
            windowcount[s[i]-'a']++;
            windowcount[s[i-plen]-'a']--;
            if(windowcount==pcount)
            {
                result.push_back(i-plen+1);
            }
        }
     return result;
    }
    
};