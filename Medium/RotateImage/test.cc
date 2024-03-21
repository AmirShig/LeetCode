#include <gtest/gtest.h>

#include "Solution.h"

class RotateMatrixTest : public ::testing::Test {
 protected:
  bool compareMatrices(const std::vector<std::vector<int>>& mat1,
                       const std::vector<std::vector<int>>& mat2) {
    if (mat1.size() != mat2.size() || mat1[0].size() != mat2[0].size())
      return false;
    for (size_t i = 0; i < mat1.size(); ++i) {
      for (size_t j = 0; j < mat1[i].size(); ++j) {
        if (mat1[i][j] != mat2[i][j]) return false;
      }
    }
    return true;
  }
};

TEST_F(RotateMatrixTest, Rotate2x2) {
  std::vector<std::vector<int>> matrix = {{1, 2}, {3, 4}};
  std::vector<std::vector<int>> expected = {{3, 1}, {4, 2}};
  Solution().rotate(matrix);
  EXPECT_TRUE(compareMatrices(matrix, expected));
}

TEST_F(RotateMatrixTest, Rotate3x3) {
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  std::vector<std::vector<int>> expected = {{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
  Solution().rotate(matrix);
  EXPECT_TRUE(compareMatrices(matrix, expected));
}

TEST_F(RotateMatrixTest, Rotate4x4) {
  std::vector<std::vector<int>> matrix = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  std::vector<std::vector<int>> expected = {
      {13, 9, 5, 1}, {14, 10, 6, 2}, {15, 11, 7, 3}, {16, 12, 8, 4}};
  Solution().rotate(matrix);
  EXPECT_TRUE(compareMatrices(matrix, expected));
}