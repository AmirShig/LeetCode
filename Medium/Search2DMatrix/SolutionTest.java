import org.junit.Test;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

public class SolutionTest {

  @Test
  public void testSearchMatrix() {
    Solution solution = new Solution();

    int[][] matrix = {
            {1, 3, 5, 7},
            {10, 11, 16, 20},
            {23, 30, 34, 50}
    };

    assertTrue(solution.searchMatrix(matrix, 3));
    assertTrue(solution.searchMatrix(matrix, 11));
    assertTrue(solution.searchMatrix(matrix, 30));
    assertTrue(solution.searchMatrix(matrix, 50));
    assertFalse(solution.searchMatrix(matrix, 0));
    assertFalse(solution.searchMatrix(matrix, 13));
    assertFalse(solution.searchMatrix(matrix, 51));
  }
}