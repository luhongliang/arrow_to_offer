/**
@File	jumper_floor.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	jumpe floor only in 1-2 steps.
@Idea   f(n) = f(n-1) + f(n-2), like fibonacci sequence.
*/

class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 0) {
            return 0;
        }
        else if (number == 1) {
            return 1;
        }
        else if (number == 2) {
            return 2;
        }
        else {
            int first = 1;
            int second = 2;
            int current;
            for (int i = 3; i <= number; i++) {
                current = first + second;
                first = second;
                second = current;
            }
            return current;
        }
    }
};
