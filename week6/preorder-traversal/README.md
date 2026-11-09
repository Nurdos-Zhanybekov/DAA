1. Problem
Collect all binary tree values in root, left, right order.

2. Approach
At each node, the helper immediately resizes the array with realloc to add the current value, then recurses left and right.
Tracing: Root 1, left 2, right 3. At 1, realloc size 1 (array: 1). Go left to 2, realloc size 2 (array: 1, 2). Go right to 3, realloc size 3 (array: 1, 2, 3).
Challenges: Forgetting to set returnSize to 0 initially caused realloc to read garbage memory and crash.

3. Time Complexity
Time Complexity: O(n squared)
Reallocating the array by one slot at all n nodes copies elements repeatedly.

4. Reflection
Pre-count the nodes and allocate the full array once with malloc to get O(n) time.