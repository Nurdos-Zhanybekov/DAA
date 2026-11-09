1. Problem
Sorting a singly linked list in ascending order.

2. Approach
Used Bubble Sort adapted for linked lists, swapping node values through pointer traversal with a shrinking boundary tracker.

3. Time Complexity
Time Complexity: O(n squared)
Explanation: Traversing and comparing nodes across multiple passes yields quadratic time.

4. Reflection

More efficient approach: Yes, using merge sort.

What to change: Split the linked list into halves, recursively sort them, and merge the sorted halves.

Improved complexity: O(n log n).