#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() - 1, left = 0, ret = 0;
        while (right > left)//�������н��
        {
            int v = min(height[right], height[left]) * (right - left);//�������
            ret = max(ret, v);//ÿ�μ������µ��ἰ�󣬱�������
            if (height[right] > height[left])  left++;//˫ָ��λ���ƶ�
            else   right--;
        }
        return ret;
    }
};