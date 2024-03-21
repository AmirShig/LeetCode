#include "Solution.h"

int main() {
  std::vector<std::vector<int>> matrix = {{1, 2, 3, 4, 5},
                                          {6, 7, 8, 9, 10},
                                          {11, 12, 13, 14, 15},
                                          {16, 17, 18, 19, 20},
                                          {21, 22, 23, 24, 25}};

  std::vector<int> result;
  Solution res;
  result = res.spiralOrder(matrix);

  for (const auto &i : result) cout << i << endl;
  return 0;
}