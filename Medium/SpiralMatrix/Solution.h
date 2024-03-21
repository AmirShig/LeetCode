#include <iostream>
#include <vector>

using std::vector;

class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int n = matrix.size();
    if (n == 0) return result;
    int m = matrix[0].size();

    int up = 0, left = 0;
    int right = m, down = n;

    while (left < right && up < down) {
      for (int k = left; k < right; ++k) {
        result.push_back(matrix[up][k]);
      }
      up++;
      for (int k = up; k < down; ++k) {
        result.push_back(matrix[k][right - 1]);
      }
      right--;
      if (up < down) {
        for (int k = right - 1; k >= left; --k) {
          result.push_back(matrix[down - 1][k]);
        }
        down--;
      }
      if (left < right) {
        for (int k = down - 1; k >= up; --k) {
          result.push_back(matrix[k][left]);
        }
        left++;
      }
    }
    return result;
  }
};