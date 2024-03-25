#include <gtest/gtest.h>

#include "Solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, EmptyList) {
  ListNode* head = nullptr;
  EXPECT_FALSE(solution.hasCycle(head));
}

TEST_F(SolutionTest, NoCycle) {
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  EXPECT_FALSE(solution.hasCycle(head));
  while (head) {
    ListNode* temp = head;
    head = head->next;
    delete temp;
  }
}

TEST_F(SolutionTest, CycleExists) {
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);

  head->next->next->next->next = head->next;
  EXPECT_TRUE(solution.hasCycle(head));
  while (head) {
    ListNode* temp = head;
    head = head->next;
    delete temp;
  }
}