1. Problem
   Find the index of a target value in a sorted array of integers, or return -1 if it is not found.
2. Approach
   Use binary search with left and right pointers. Compare the middle element with the target, and cut the search space in half each time until the target is found or the range is exhausted.
3. Time Complexity
   Time Complexity: O(log n)
   Why: The search space is divided in half at every iteration, so the number of checks grows logarithmically with the size of the array.
4. Space Complexity
   Space Complexity: O(1)
   Why: Only a few scalar variables (left, right, mid) are used, requiring constant extra memory.