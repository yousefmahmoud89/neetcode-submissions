class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

    /*
    Input: nums = [0,1,2,2,3,0,4,2], val = 2

Output: k = 5, nums = [0,1,3,0,4,_,_,_]
*/

int  k=0 ;
for(int i ; i<nums.size();i++)
{
    if(nums[i]==val)
    continue;
    else if(nums[i]!=val)
    {
    nums[k]=nums[i];
    k++;
    }
}
return k;
        
    }
};