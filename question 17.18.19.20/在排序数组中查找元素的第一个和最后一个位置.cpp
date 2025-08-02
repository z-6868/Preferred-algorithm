#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //处理边界情况
        if (nums.size() == 0) return { -1, -1 };
        int left = 0, right = nums.size() - 1, begin = 0, end = 0;
        //查找左端点
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) right = mid;
            else left = mid + 1;
        }
        if (nums[left] == target) begin = left;
        else return { -1,-1 };

        //查找右端点
        right = nums.size() - 1;//重置右端点位置
        while (left < right)
        {
            int mid = left + (right - left + 1) / 2;
            if (nums[mid] > target) right = mid - 1;
            else left = mid;
        }
        end = right;
        return { begin,end };
    }
};