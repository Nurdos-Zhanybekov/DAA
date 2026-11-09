1. Problem
Collect all binary tree values in left, right, root order.

2. Approach
The helper recurses on the left child and right child first, then uses realloc to append the current node value at the end.
Tracing: Root 1, left 2, right 3. Go left to 2, realloc size 1 (array: 2). Go right to 3, realloc size 2 (array: 2, 3). Return to 1, realloc size 3 (array: 2, 3, 1).
Challenges: I initially placed the realloc line before the right recursive call by mistake, which gave the inorder output instead.

3. Time Complexity
Time Complexity: O(n squared)
Calling realloc at every node copies the growing array up to n times.

4. Reflection
Count the tree nodes first and allocate the array in a single malloc call to achieve O(n) time.