1. Problem
   Find the earliest version among n versions that is bad, given that all versions following a bad version are also bad, while minimizing API calls.
2. Approach
   Apply binary search across the range of versions [1, n]. If the middle version is bad, the first bad version is at or to the left; otherwise, it is to the right.
3. Time Complexity
   Time Complexity: O(\log n)
   Why: Halving the version range at each step results in a logarithmic number of API calls relative to n.
4. Space Complexity
   Space Complexity: O(1)
   Why: Only constant extra memory is used for tracking indices.