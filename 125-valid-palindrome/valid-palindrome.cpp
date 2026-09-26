class Solution {
public:
    bool isPalindrome(string s) {
        string newst;
       for(auto i:s)
       {
         if(isalnum(i))
         {
          newst+=tolower(i);
         }
       }
       string reversed=newst;
       reverse(reversed.begin(),reversed.end());
       return reversed==newst;
        
        
    }
};