class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = 0, ret = INT_MAX;
        int n = nums.size();
        for (; right < n; right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                ret = min(ret, right - left + 1);
                sum -= nums[left++];
            }
        }
        //·µ»Ø½á¹û
        return ret == INT_MAX ? 0 : ret;
    }
};