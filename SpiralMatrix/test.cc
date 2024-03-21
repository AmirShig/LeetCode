#include <gtest/gtest.h>

#include "Solution.h"

TEST(SpiralMatrixTest, EmptyMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix;
  std::vector<int> expected;
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, SingleElementMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1}};
  std::vector<int> expected = {1};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, TwoByTwoMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1, 2}, {4, 3}};
  std::vector<int> expected = {1, 2, 3, 4};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, ThreeByThreeMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, TwoByThreeMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {6, 5, 4}};
  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, ThreeByTwoMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1, 2}, {6, 3}, {5, 4}};
  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, SingleColumnMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1}, {2}, {3}, {4}, {5}};
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}

TEST(SpiralMatrixTest, SingleRowMatrix) {
  Solution res;
  std::vector<std::vector<int>> matrix = {{1, 2, 3, 4, 5}};
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(res.spiralOrder(matrix), expected);
}