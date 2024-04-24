#include <gtest/gtest.h>

#include "Solution.h"

TEST(RotateListTest, EmptyList) {
  Solution solution;
  ListNode* head = nullptr;
  int k = 2;
  ListNode* expected_head = nullptr;
  EXPECT_EQ(solution.rotateRight(head, k), expected_head);
}

TEST(RotateListTest, OneElementList) {
  Solution solution;
  ListNode* head = new ListNode(1);
  int k = 2;
  ListNode* expected_head = head;
  EXPECT_EQ(solution.rotateRight(head, k), expected_head);
  delete head;
}

TEST(RotateListTest, TwoElementsList) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  int k = 2;
  ListNode* expected_head = head;
  EXPECT_EQ(solution.rotateRight(head, k), expected_head);
  delete head->next;
  delete head;
}

TEST(RotateListTest, MultipleElementsListKZero) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  int k = 0;
  ListNode* expected_head = head;
  EXPECT_EQ(solution.rotateRight(head, k), expected_head);
  delete head->next->next;
  delete head->next;
  delete head;
}
