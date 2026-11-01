class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lenS=s.size();
        int left=0; int right=0;int len=0;int maxlen=0;
        vector<int> mpp(256,-1);
        while(right<lenS){
            if(mpp[s[right]]!=-1){
                if(mpp[s[right]]>=left){
                    left=mpp[s[right]]+1;
                }
            }
            len=right-left+1;
            maxlen=max(maxlen,len);
            mpp[s[right]]=right;
            right++;
        }
         return maxlen;
        }
};