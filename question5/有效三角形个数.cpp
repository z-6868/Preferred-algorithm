#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int last = nums.size()-1;
        int ret = 0;
        //����
        sort(nums.begin(), nums.end());
        for (; last >= 2; last--)
        {
            //ȷ��˫ָ��λ��
            int left = 0;
            int right = last - 1;
             
            while (left < right)
            {
                if (nums[left] + nums[right] > nums[last])
                {
                    ret += right - left;
                    right--;
                }
                else
                {
                    left++;
                }
            }

        }
        return ret;
    }
};

