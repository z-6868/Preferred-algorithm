#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int bitsum(int n) {//返回逐个位置的平方和
        int sum = 0, t = 0;
        while (n)
        {
            t = n % 10;
            sum += t * t;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int fast = bitsum(n), slow = n;
        while (fast != slow)//只有两个数相同时才会跳出
        {
            fast = bitsum(bitsum(fast));
            slow = bitsum(slow);
        }
        return fast == 1;//返回判断关系的结果（false/ture）
    }
};