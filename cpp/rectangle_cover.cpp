
/**
@File	two_dimension_array_find.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	cal method count to cover a 2*n rectangle with 1*2 small rectangle.
@Idea   dynamic plan type need to find state tranformation equation.
        f(n) = f(n-1) + f(n-2) 
*/

#include <vector>

using namespace std;

class Solution {
public:
    int rectCover(int number) {
        if (number <= 0) {
            return 0;
        }
        else if (number <= 2) {
            return number;
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
