class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int lenS1=s1.size();
        int lenS2=s2.size();
        vector<int> window(26,0);
        vector<int> freqS1(26,0);
        if(lenS1>lenS2) return false;
        for(int i=0;i<lenS1; i++){
          window[s2[i]-'a']++;
          freqS1[s1[i]-'a']++;
        }
        if(window==freqS1) return true;
        for(int i=lenS1;i<lenS2;i++){
            window[s2[i]-'a']++;
            window[s2[i-lenS1]-'a']--;
            if(window==freqS1){
                return true;
            }
        }
        return false;

    }
};