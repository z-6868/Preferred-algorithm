#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    int mySqrt(int x) {

        int left = 0;
        int right = x;
        while (left < right)
        {
            long long mid = (long long)left + (right - left + 1LL) / 2;
            if (mid * mid <= x) left = mid;
            else  right = mid - 1;
        }
        return left;
    }
};