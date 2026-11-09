1. Problem
Find the single node where two singly linked lists merge and point to the same memory location, returning null if they never intersect.

2. Approach
We use a nested loop where each node in the first list is compared against every node in the second list until a matching node reference is found. For example, checking list A node by node against all nodes of list B. A challenge was realizing that values can match while memory addresses differ, so we had to compare node pointers instead of node values.

3. Time Complexity
Time Complexity: O(m times n)
Explanation: Because we loop through every node of the second list for each node in the first list, the operations scale as the product of their sizes m and n.

4. Reflection

Is there a more efficient approach? Yes, using two pointers that switch heads when reaching the end.

What would you need to change? The loop structure to a dual pointer traversal.

What complexity could the improved solution achieve? O(m + n) time and O(1) space.