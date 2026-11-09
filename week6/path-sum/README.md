1. Problem
Check if any root-to-leaf path adds up to targetSum.

2. Approach
A helper adds node values down every path and uses realloc to save the total at each leaf into an array. The main function loops through the array to check for targetSum.
Tracing: Root 5 with left 4 and right 8, target 9. Left leaf saves 9 to array. Right leaf saves 13. Loop finds 9 and returns true.
Challenges: Checking the sum at NULL nodes instead of leaves gave false positives on nodes with only one child.

3. Time Complexity
Time Complexity: O(n squared)
Visiting n nodes and reallocating the sums array at every leaf takes quadratic time in the worst case.

4. Reflection
Subtract the node value from targetSum while recursing and return a boolean directly at leaves. This removes the array and runs in O(n) time.