#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, ret = 0;
        int n = s.size();
        int hash[128] = { 0 };

        for (; right < n; right++)
        {
            hash[s[right]]++;//进
            while (hash[s[right]] > 1)//判断
            {
                hash[s[left++]]--;//出
            }
            ret = max(ret, right - left + 1);//更新结果
        }
        return ret;
    }
};