#include <iostream>
#include <vector>

using std::vector;

class Solution {
 public:
  int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n1 < 1 || n2 < 1) return -1;
    for (int i = 0, j = 0; i < n1 && j < n2;) {
      if (nums1[i] == nums2[j]) {
        return nums1[i];
      } else if (nums1[i] < nums2[j]) {
        i++;
      } else {
        j++;
      }
    }
    return -1;
  }
};