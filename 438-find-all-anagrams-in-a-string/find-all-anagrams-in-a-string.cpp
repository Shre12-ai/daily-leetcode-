class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int lenS=s.size();
        int lenP=p.size();
        if(lenP>lenS) return result;
        vector<int> window(26,0);
        vector<int> freqP(26,0);
        for(int i=0;i<lenP;i++){
            window[s[i]-'a']++;
            freqP[p[i]-'a']++;
        }
        if(freqP==window) result.push_back(0);
        for(int i=lenP;i<lenS;i++){
            window[s[i]-'a']++;
            window[s[i-lenP]-'a']--;
            if(window==freqP){
                result.push_back(i-lenP+1);
            }
        }
        return result;
    }
};