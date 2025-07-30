#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = 0, ret = INT_MAX;
        int n = nums.size();
        for (; right < n; right++)
        {
            sum += nums[right];//������
            while (sum >= target)//�ж�
            {
                ret = min(ret, right - left + 1);
                sum -= nums[left++];//������
            }
        }
        //���ؽ��
        return ret == INT_MAX ? 0 : ret;
    }
};