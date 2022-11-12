class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i = 0;
        int sum = 0;
        while( i < nums.size())
        {
            sum += nums[i];
            nums[i] = sum;
            i++;
        }
        return nums;
    }
};