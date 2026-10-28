class Solution {
public:
    string reorganizeString(string s) {
      vector<int> mpp(26,0);
      for(auto i:s){
        mpp[i-'a']++;
      }
      int max=0, letter;
      for(int i=0;i<mpp.size();i++){
       if(mpp[i]>max){
        max=mpp[i];
        letter=i;
       }
      }
      if(max>(s.length()+1)/2) return "";
     string res(s.length(),' ');
     int idx=0;
     while(mpp[letter]-- >0){
     res[idx]=(char)(letter+'a');
     idx+=2;
     }
     for(int i=0;i<mpp.size();i++){
        while(mpp[i]-- >0){
            if(idx>=res.size()) idx=1;
        res[idx]=(char)(i+'a');
        idx+=2;             
     }
      }
     return res;


    }
};