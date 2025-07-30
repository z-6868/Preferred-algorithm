#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map <int, int>hash;

        int ret = 0;
        for (int left = 0, right = 0; right < f.size(); right++)
        {
            //��
            hash[f[right]]++;
            while (hash.size() > 2)//�ж�
            {
                //��
                hash[f[left]]--;
                if (hash[f[left]] == 0)
                {
                    hash.erase(f[left]);
                }
                left++;
            }
            //����
            ret = max(ret, right - left + 1);
        }
        //���ؽ��
        return ret;
    }
};