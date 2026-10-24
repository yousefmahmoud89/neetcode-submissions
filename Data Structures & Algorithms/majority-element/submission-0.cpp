class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sizze=nums.size()/2;
        unordered_map<int,int> freq;
        for(int i:nums)
        {
            freq[i]++;
            if(freq[i]>sizze)
            return i;
        }
    }
};