class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return false;
        }
        int curCol = 0;
        int curRow = 0;

        int n = matrix.length - 1;
        int m = matrix[0].length - 1;

        while (curRow <= n) {
            int mid = curRow + (n - curRow) / 2;

            if (target > matrix[mid][m])
                curRow = mid + 1;
            else if (target < matrix[mid][0])
                n = mid - 1;
            else
                break;
        }
        if (curRow > n) return false;

        while (curCol <= m) {
            int mid = (m - curCol) / 2;
            int curNumber = matrix[curRow][mid];

            if (curNumber < target)
                curCol = mid + 1;
            else if (curNumber > target)
                m = mid - 1;
            else
                return true;
        }

        return false;
    }
}