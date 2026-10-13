class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.size();
    int left=0 , right=0 ,maxlen=0, len=0;
    vector <int> mpp(256,-1);
    while(right<n){
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