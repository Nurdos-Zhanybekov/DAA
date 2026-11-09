1. Problem
Merge two trees by summing overlapping nodes and keeping non-overlapping nodes.

2. Approach
I build a completely new tree using malloc. If both nodes exist, I sum their values. If one node is NULL, a helper function duplicates every remaining node of the other subtree.
Tracing: Tree 1 has root 1, left 3. Tree 2 has root 2. Malloc root with 1 + 2 = 3. On the left, Tree 2 is NULL, so copyTree mallocs a copy of node 3.
Challenges: Not checking for NULL before adding values caused a segmentation fault when one tree was smaller than the other.

3. Time Complexity
Time Complexity: O(n + m)
Because copyTree duplicates non-overlapping branches, every node in both trees is visited.

4. Reflection
Add values directly into root1 in place, and when root1 is NULL, immediately return root2 without copying. This reduces time complexity to O(min(n, m)).