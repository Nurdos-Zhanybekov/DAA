1. Problem
Find the number of nodes on the longest path from the root to a leaf.

2. Approach
I use recursion to compare maxDepth(left) and maxDepth(right), then call maxDepth a second time on the larger side and add 1.
Tracing: Root 1 has left child 2. Node 2 returns 1. At node 1, the if statement checks that left (1) is greater than right (0), then calls maxDepth(2) again to return 1 + 1 = 2.
Challenges: Forgetting the NULL base case caused a crash, and using a global counter failed across multiple test cases.

3. Time Complexity
Time Complexity: O(2 to the power of n)
Calling the recursive function in the if condition and again in the return statement doubles the work at each level.

4. Reflection
Store the left and right depths in variables before comparing them to reach O(n) time.