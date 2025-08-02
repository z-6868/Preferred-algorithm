#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while (left <= right)
        {
            mid = left + (right - left) / 2;//·ÀÖ¹Ïà¼ÓÒç³ö
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            if (nums[mid] == target)
            {
                return mid;
            }
        }
        return -1;
    }
};