1. Problem
Mirror a binary tree by swapping all left and right children.

2. Approach
For every node, I allocate a brand new node with malloc, copy the value, and set its left and right pointers to the inverted right and left subtrees.
Tracing: Root 1, left 2, right 3. Malloc new root 1. Set its left to new node 3, and its right to new node 2.
Challenges: Modifying pointers in place without a temporary variable overwrote the left pointer before I could assign it to the right side.

3. Time Complexity
Time Complexity: O(n)
We visit each node once, though calling malloc at every node wastes O(n) memory.

4. Reflection
Swap the left and right pointers in place using a temporary pointer variable. Time stays O(n) and space improves to O(h).