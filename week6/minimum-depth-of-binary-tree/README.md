1. Problem
Find the number of nodes on the shortest path from the root to the nearest leaf.

2. Approach
If one child is NULL, we recurse down the existing child. If both exist, we compare minDepth(left) and minDepth(right) and recompute the smaller side plus 1.
Tracing: Root 1 has right child 2. At 1, left is NULL, so it returns 1 + minDepth(2). Node 2 is a leaf and returns 1. Total is 2.
Challenges: Simply swapping the comparison sign from maxDepth failed on nodes with one child because it treated the NULL side as a leaf of depth 0.

3. Time Complexity
Time Complexity: O(2 to the power of n)
When nodes have two children, the smaller subtree depth is calculated twice at each step.

4. Reflection
Save the recursive results in variables, or use breadth-first search to stop at the first leaf found. Both achieve O(n) time.