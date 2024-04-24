#include <gtest/gtest.h>

#include "Solution.h"

TEST(ProductOfArrayExceptSelf, EmptyArray) {
  vector<int> nums = {};
  vector<int> expected = {};
  Solution solution;
  EXPECT_EQ(expected, solution.productExceptSelf(nums));
}

TEST(ProductOfArrayExceptSelf, SingleElementArray) {
  vector<int> nums = {1};
  vector<int> expected = {1};
  Solution solution;
  EXPECT_EQ(expected, solution.productExceptSelf(nums));
}

TEST(ProductOfArrayExceptSelf, TwoElementsArray) {
  vector<int> nums = {1, 2};
  vector<int> expected = {2, 1};
  Solution solution;
  EXPECT_EQ(expected, solution.productExceptSelf(nums));
}

TEST(ProductOfArrayExceptSelf, NegativeNumbers) {
  vector<int> nums = {-1, -2, -3};
  vector<int> expected = {6, 3, 2};
  Solution solution;
  EXPECT_EQ(expected, solution.productExceptSelf(nums));
}

TEST(ProductOfArrayExceptSelf, LargeArray) {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> expected = {3628800, 1814400, 1209600, 907200, 725760,
                          604800,  518400,  453600,  403200, 362880};
  Solution solution;
  EXPECT_EQ(expected, solution.productExceptSelf(nums));
}