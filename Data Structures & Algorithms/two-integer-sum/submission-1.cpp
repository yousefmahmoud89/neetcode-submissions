class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > mp;
        for(int i=0 ; i< nums.size();i++)
        {
            int tar7=target-nums[i];
            if(mp.find(tar7) != mp.end())
            {
                return {mp[tar7] , i};
            }
            mp[nums[i]]=i;
        }
        
        
    }
};
