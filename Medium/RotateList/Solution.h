#pragma once

#include <iostream>

using std::vector;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next) return head;

    int n = 0;
    for (ListNode* tmp = head; tmp; tmp = tmp->next) {
      n++;
    }
    k = k % n;

    for (int i = 0; i < k; i++) {
      head = MoveToHead(head);
    }
    return head;
  }

  ListNode* MoveToHead(ListNode* head) {
    ListNode* tmp = head;
    ListNode* prev_tmp = head;
    while (tmp->next != nullptr) {
      prev_tmp = tmp;
      tmp = tmp->next;
    }

    prev_tmp->next = nullptr;
    tmp->next = head;
    return tmp;
  }
};