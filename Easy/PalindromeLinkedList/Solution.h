#ifndef LEETCODE_EASY_PALINDROMELINKEDLIST_SOLUTION_H_
#define LEETCODE_EASY_PALINDROMELINKEDLIST_SOLUTION_H_

#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  bool isPalindrome(ListNode* head) {
    ListNode* middle = head;
    for (ListNode* fast = head; fast && fast->next; fast = fast->next->next) {
      middle = middle->next;
    }
    ListNode* tmp = nullptr;
    while (middle != nullptr) {
      ListNode* next = middle->next;
      middle->next = tmp;
      tmp = middle;
      middle = next;
    }
    ListNode* head_part = head;
    ListNode* tail_part = tmp;
    while (tail_part) {
      if (head_part->val != tail_part->val) return false;
      head_part = head_part->next;
      tail_part = tail_part->next;
    }
    return true;
  }
};

#endif  // LEETCODE_EASY_PALINDROMELINKEDLIST_SOLUTION_H_