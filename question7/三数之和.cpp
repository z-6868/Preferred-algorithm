#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());//排序
        vector <vector <int>> ret;//储存结果的二维数组
        int anchor = 0;
        int n = nums.size();
        for (; anchor < n - 2;)
        {

            if (nums[anchor] > 0) break;//小优化

            //循环两数
            int left = anchor + 1, right = n - 1;
            int targer = -nums[anchor];

            while (left < right)
            {
                //  >   去重且防越界
                int sum = nums[left] + nums[right];

                if (targer > sum) left++;
                //  <   去重且防越界
                else if (targer < sum) right--;
                //  =   返回结果
                else
                {
                    ret.push_back({ nums[anchor],nums[left],nums[right] });
                    left++, right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
            }
            // 去重且防越界
            anchor++;
            while (anchor < left && nums[anchor] == nums[anchor - 1]) anchor++;
        }
        //返回结果
        return ret;
    }
};