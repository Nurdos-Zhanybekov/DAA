1. Problem
Collect all binary tree values in left, root, right order.

2. Approach
A recursive helper visits the left child, resizes the result array by one using realloc to store the current value, and visits the right child.
Tracing: For root 1 with left 2 and right 3, we go to 2, realloc size 1 (array: 2). Return to 1, realloc size 2 (array: 2, 1). Go to 3, realloc size 3 (array: 2, 1, 3).
Challenges: Using a fixed array failed on large inputs, and modifying the array pointer inside the helper did not work until I used a double pointer.

3. Time Complexity
Time Complexity: O(n squared)
We visit n nodes, and calling realloc at every node copies the array repeatedly.

4. Reflection
Count the nodes first and call malloc once. This reduces the complexity to O(n).