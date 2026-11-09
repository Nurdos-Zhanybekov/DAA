1. Problem
Check whether the sequence of values in a singly linked list reads the same forwards and backwards.

2. Approach
First, we count the total number of nodes by traversing the list. Next, we allocate a dynamic array of that size and copy every node value into the array. Finally, we use a two-pointer technique to compare elements from both ends towards the center. For example, with list 1, 2, 2, 1, we store the values in an array and check outer elements inward. A challenge was managing memory safely by ensuring we free the allocated array before returning.

3. Time Complexity
Time Complexity: O(n)
Explanation: We traverse the list twice to count and copy, and loop through half the array, resulting in linear growth with respect to n nodes.

4. Reflection

Is there a more efficient approach? Yes, reversing the second half of the linked list in place.

What would you need to change? Find the middle node, reverse the second half, compare it with the first half, and restore the list.

What complexity could the improved solution achieve? O(n) time and O(1) space.