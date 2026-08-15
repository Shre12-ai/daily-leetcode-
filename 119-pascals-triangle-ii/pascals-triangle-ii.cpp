class Solution {
public:
     int getele(int col, int row)
     { 
        long long ans=1;
         for(int i=0;i<col;i++)
        {
            ans=ans*(row-i);
            ans=ans/(i+1);
        }
      return ans;
     }
    vector<int> getRow(int rowIndex) {
     vector<int> row; 
      row.push_back(1);
     for(int i=1;i<=rowIndex;i++)
     {
        row.push_back(getele(i,rowIndex));
     }
       return row;

        
    }
};