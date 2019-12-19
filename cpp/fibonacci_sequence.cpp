/**
@File	fibonacci_sequence.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	return the n-th item in a fibonacci sequece.
@Idea   f(n) = f(n-1) + f(n-2)
        using loop rather than recursive function.
*/

class Solution {
public:
    int Fibonacci(int n) {
        if (n < 0) {
            return -1;
        }
        int data[2] = {0, 1};
        if (n < 2) {
            return data[n];
        }
        int first = data[0];
        int second = data[1];
        int current;
        for (int i = 2; i <= n; i++) {
            current = first + second;
            first = second;
            second = current;
        }
        return current;
    }
};
