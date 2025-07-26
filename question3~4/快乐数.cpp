#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int bitsum(int n) {//�������λ�õ�ƽ����
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
        while (fast != slow)//ֻ����������ͬʱ�Ż�����
        {
            fast = bitsum(bitsum(fast));
            slow = bitsum(slow);
        }
        return fast == 1;//�����жϹ�ϵ�Ľ����false/ture��
    }
};