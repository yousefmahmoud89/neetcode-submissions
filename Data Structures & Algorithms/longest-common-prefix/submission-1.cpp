class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s ="";
        sort(strs.begin(), strs.end());
        if(strs[0][0]!= strs[strs.size()-1][0])
        return "";
        
          for(int j=0 ;j<strs[0].size();j++)
          {
            if(strs[0][j]==strs[strs.size()-1][j])
             s+=strs[0][j];
             else if(strs[0][j]!=strs[strs.size()-1][j])
             return s;
          }
         
          return s;
    }
   
};