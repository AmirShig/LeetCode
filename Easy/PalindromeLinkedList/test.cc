#include <gtest/gtest.h>

#include "Solution.h"

void deleteLinkedList(ListNode* head) {
  while (head) {
    ListNode* temp = head;
    head = head->next;
    delete temp;
  }
}

// Test case for an empty list
TEST(PalindromeLinkedListTest, EmptyList) {
  Solution solution;
  ListNode* head = nullptr;
  EXPECT_TRUE(solution.isPalindrome(head));
}

// Test case for a single element list
TEST(PalindromeLinkedListTest, SingleElementList) {
  Solution solution;
  ListNode* head = new ListNode(1);
  EXPECT_TRUE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a palindrome list with odd number of elements
TEST(PalindromeLinkedListTest, OddPalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(1);
  EXPECT_TRUE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a palindrome list with even number of elements
TEST(PalindromeLinkedListTest, EvenPalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(2);
  head->next->next->next = new ListNode(1);
  EXPECT_TRUE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a non-palindrome list with odd number of elements
TEST(PalindromeLinkedListTest, OddNonPalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  EXPECT_FALSE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a non-palindrome list with even number of elements
TEST(PalindromeLinkedListTest, EvenNonPalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  EXPECT_FALSE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a large palindrome list
TEST(PalindromeLinkedListTest, LargePalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  ListNode* originalHead = head;
  for (int i = 2; i <= 1000; ++i) {
    ListNode* newNode = new ListNode(i);
    newNode->next = head;
    head = newNode;
  }
  EXPECT_FALSE(solution.isPalindrome(head));
  deleteLinkedList(originalHead);
}

// Test case for a large non-palindrome list
TEST(PalindromeLinkedListTest, LargeNonPalindrome) {
  Solution solution;
  ListNode* head = new ListNode(1);
  for (int i = 2; i <= 1000; ++i) {
    ListNode* newNode = new ListNode(i);
    newNode->next = head;
    head = newNode;
  }
  EXPECT_FALSE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a negative number in the list
TEST(PalindromeLinkedListTest, NegativeNumber) {
  Solution solution;
  ListNode* head = new ListNode(-1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(-1);
  EXPECT_TRUE(solution.isPalindrome(head));
  deleteLinkedList(head);
}

// Test case for a list with duplicates
TEST(PalindromeLinkedListTest, DuplicateValues) {
  Solution solution;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(1);
  head->next->next->next = new ListNode(2);
  head->next->next->next->next = new ListNode(1);
  EXPECT_TRUE(solution.isPalindrome(head));
  deleteLinkedList(head);
}
