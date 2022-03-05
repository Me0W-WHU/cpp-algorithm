https://leetcode-cn.com/problems/move-zeroes/submissions/
- Use double pointers
  - p to indicate current operating cell.
  - q to indicate the cell which should be moved to p. Whenever q reaches a zero-cell, it jumps over to the next non-zero cell.
- Mind that there might be consecutive zeros.