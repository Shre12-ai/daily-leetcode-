class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n);
    
        int maxi=0;
        alt[0]=gain[0];
        if(gain[0]>maxi){
            maxi=gain[0];
        }
        for(int i=1;i<n;i++){
            alt[i]=alt[i-1]+gain[i];
            maxi=max(maxi,alt[i]);

        }
        return maxi;
    }
};