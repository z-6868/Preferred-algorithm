#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() - 1, left = 0, ret = 0;
        while (right > left)//遍历所有结果
        {
            int v = min(height[right], height[left]) * (right - left);//计算体积
            ret = max(ret, v);//每次计算完新的提及后，保留最大的
            if (height[right] > height[left])  left++;//双指针位置移动
            else   right--;
        }
        return ret;
    }
};