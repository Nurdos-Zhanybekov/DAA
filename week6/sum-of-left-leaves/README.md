1. Problem
Find the sum of all leaf nodes that are left children.

2. Approach
A helper passes an isLeft flag down the tree. When it finds a leaf with isLeft equal to 1, it resizes an array with realloc to save the value. The main function sums the array.
Tracing: Root 3, left 9, right 20. Go to 9 (isLeft 1), leaf found, realloc array to store 9. Go to 20 (isLeft 0), ignored. Main loop sums array to return 9.
Challenges: Checking only if a left child existed without checking if it had children of its own mistakenly included non-leaf nodes.

3. Time Complexity
Time Complexity: O(n squared)
Visiting n nodes and calling realloc for each left leaf takes up to O(n squared) time.

4. Reflection
Return the leaf values directly from the recursive calls and add them together without using an array. This achieves O(n) time.