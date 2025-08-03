#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long cnt = 0, cnt_a = 0, cnt_b = 0;
    if (n >= 3)
    {
        cnt_a = (n - 2) * (n - 1) * (n) % 998244353;
        cnt_b = (long long)pow(26, (n - 3)) % 998244353;
        cnt = (cnt_a * cnt_b) % 998244353;
    }
    else
        return -1;
    cout << cnt;
    return 0;
}