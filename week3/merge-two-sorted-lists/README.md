1. Problem
   Merge two sorted linked lists into a single sorted list by splicing their nodes together.
2. Approach
   Use a recursive function. We compare the values at the heads of both lists, pick the smaller value to be part of the result, and recursively call the function for the remaining nodes until one list is empty.

Tracing:
List 1: [1, 2, 4], List 2: [1, 3, 4]

Compare heads 1 and 1. Take from list 1, then merge [2, 4] and [1, 3, 4]. 
Compare 2 and 1. Take from list 2, then merge [2, 4] and [3, 4].
Compare 2 and 3. Take from list 1, then merge [4] and [3, 4].
This process continues until one list becomes NULL, returning the fully spliced chain.

3. Time Complexity
   O(n + m) because we visit every single node across both lists exactly once during the recursive calls.
4. Reflection

Better approach? An iterative approach using a dummy head node.
Changes? Replace recursion with a simple while loop and pointer updates to avoid call stack overhead.
Complexity? Same O(n + m) time, but improves auxiliary space complexity from O(n + m) down to O(1).