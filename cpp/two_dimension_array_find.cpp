/**
@File	two_dimension_array_find.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	find a number in a ordered 2-d array
@Idea   start with the right-up item,
        compare target with array[row][col].
        if target is equal to array[row][col], done.
        if target is less than array[row][col], look for target towards left,
        otherwise, look for target towards bottom.
*/

#include <vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0) {
            return false;
        }
        int row = 0;
        int col = array[0].size() - 1;
        while (row < array.size() && col >= 0) {
            if (array[row][col] == target) {
                return true;
            }
            else if (array[row][col] < target) {
                row++;
            }
            else {
                col--;
            }
        }
        return false;
    }
};
