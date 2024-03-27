#include <gtest/gtest.h>

#include "Solution.h"

TEST(MinimumCommonIntegerTest, EmptyArrays) {
  Solution res;
  std::vector<int> nums1;
  std::vector<int> nums2;
  EXPECT_EQ(res.getCommon(nums1, nums2), -1);
}

TEST(MinimumCommonIntegerTest, NoCommonElements) {
  Solution res;
  std::vector<int> nums1 = {1, 3, 5};
  std::vector<int> nums2 = {2, 4, 6};
  EXPECT_EQ(res.getCommon(nums1, nums2), -1);
}

TEST(MinimumCommonIntegerTest, OneCommonElement) {
  Solution res;
  std::vector<int> nums1 = {1, 2, 3};
  std::vector<int> nums2 = {2, 4};
  EXPECT_EQ(res.getCommon(nums1, nums2), 2);
}

TEST(MinimumCommonIntegerTest, MultipleCommonElements) {
  Solution res;
  std::vector<int> nums1 = {1, 2, 3, 6};
  std::vector<int> nums2 = {2, 3, 4, 5};
  EXPECT_EQ(res.getCommon(nums1, nums2), 2);
}

TEST(MinimumCommonIntegerTest, SingleElementArrays) {
  Solution res;
  std::vector<int> nums1 = {5};
  std::vector<int> nums2 = {5};
  EXPECT_EQ(res.getCommon(nums1, nums2), 5);
}

TEST(MinimumCommonIntegerTest, DifferentLengthArrays) {
  Solution res;
  std::vector<int> nums1 = {1, 3, 5, 7, 9};
  std::vector<int> nums2 = {2, 4, 6};
  EXPECT_EQ(res.getCommon(nums1, nums2), -1);
}
