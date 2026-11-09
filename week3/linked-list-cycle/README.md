1. Problem
   Check if a linked list contains a cycle.
2. Approach
   Store each visited node in a dynamic array while traversing the list. For each new node, check the array for duplicates. If found, return true; if we hit NULL, return false.

Tracing:
List: 3 -> 2 -> 0 -> -4 (points to 2). We store each node. When we hit 2 again, our check finds it in the array and returns true.

3. Time Complexity
   O(n^2) because we scan the growing array for every node.
4. Reflection

* Better approach? Floyd's Tortoise and Hare algorithm.
* Changes? Use slow and fast pointers instead of an array.
* Complexity? O(n) time and O(1) space.