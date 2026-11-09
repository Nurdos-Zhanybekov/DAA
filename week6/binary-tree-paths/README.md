1. Problem
Return all root-to-leaf paths as formatted strings.

2. Approach
At each step, I allocate a new string with malloc, copy the parent path, and append the current value. At a leaf, I realloc the result array to store the string.
Tracing: Root 1, left 2. At 1, malloc string 1. Go to 2, malloc and build string 1 to 2. Since 2 is a leaf, realloc result array to store 1 to 2.
Challenges: Using a single shared string buffer left old numbers from the left branch stuck at the end when backtracking to the right branch.

3. Time Complexity
Time Complexity: O(n squared)
Copying the entire path string at every node along a skewed tree takes quadratic time.

4. Reflection
Store path values in an integer array while traversing and only build the string once at the leaves. This brings balanced trees closer to O(n) time.