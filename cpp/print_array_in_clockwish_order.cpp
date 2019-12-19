/**
@File	print_array_in_clockwise_order.cpp
@Author	luhongliang <lhlbyr@126.com>
@Date	2019-12-18
@Brief	print array element in clockwise order.
@Idea   loop from left to right, from top to bottom,
        from right to left, from bottom to top.
*/

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if (matrix.empty()){
            return vector<int>();
        }
        vector<int> ret_matrix;
        size_t left = 0;
        size_t right = matrix[0].size();
        size_t top = 0;
        size_t bottom = matrix.size();
        while(left < right && top < bottom) {
            for (size_t j = left; left < right && top < bottom && j < right; j++) {
                ret_matrix.emplace_back(matrix[top][j]);
            }
            top++;
            for (size_t i = top; left < right && top < bottom && i < bottom; i++) {
                ret_matrix.emplace_back(matrix[i][right-1]);
            }
            right--;
            for (size_t j = right-1; left < right && top < bottom && j >= left; j--) {
                ret_matrix.emplace_back(matrix[bottom-1][j]);
                if (j == 0) {
                    break;
                }
            }
            bottom--;
            for(size_t i = bottom-1; left < right && top < bottom && i >= top; i--) {
                ret_matrix.emplace_back(matrix[i][left]);
            }
            left++;
        }
        return ret_matrix;
    }
};
