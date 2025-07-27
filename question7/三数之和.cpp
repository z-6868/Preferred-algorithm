#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());//����
        vector <vector <int>> ret;//�������Ķ�ά����
        int anchor = 0;
        int n = nums.size();
        for (; anchor < n - 2;)
        {

            if (nums[anchor] > 0) break;//С�Ż�

            //ѭ������
            int left = anchor + 1, right = n - 1;
            int targer = -nums[anchor];

            while (left < right)
            {
                //  >   ȥ���ҷ�Խ��
                int sum = nums[left] + nums[right];

                if (targer > sum) left++;
                //  <   ȥ���ҷ�Խ��
                else if (targer < sum) right--;
                //  =   ���ؽ��
                else
                {
                    ret.push_back({ nums[anchor],nums[left],nums[right] });
                    left++, right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
            }
            // ȥ���ҷ�Խ��
            anchor++;
            while (anchor < left && nums[anchor] == nums[anchor - 1]) anchor++;
        }
        //���ؽ��
        return ret;
    }
};