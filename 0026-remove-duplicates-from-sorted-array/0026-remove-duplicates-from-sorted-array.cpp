class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int k = 0;
        while( i < nums.size() - 1)
        {
            if(nums[i] != nums[i + 1])
            {
                k++;
                nums[k] = nums[i + 1];
            }
            i++;
        }
        k++;
        return k;
    }
};