/**
@File	jumpe_floor_2.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	jumper floor in 1 to n steps.
@Idea   f(n) = f(n-1) + f(n-2) + ... + f(1) =>
        f(n) = sum(n-1), f(n-1) = sum(n-2) =>
        f(n) - f(n-1) = f(n-1) =>
        f(n) / f(n-1) = 2 => f(n) = f(1) * 2^(n-1)
        f(n) is a proportional sequence. =>
        f(n) = 2^(n-1)
        use bit left move operation to acomplish it.
*/

class Solution {
public:
    int jumpFloorII(int number) {
        if (number <= 0) {
            return 0;
        }
        int jumpe_methods = 1;
        return jumpe_methods << (number - 1);
    }
};
