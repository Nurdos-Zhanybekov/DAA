1. Problem
Delete all duplicate elements from a sorted linked list so that each unique value appears only once.

2. Approach
We start at the head pointer and traverse the list, comparing the value of the current node with the value of the next node. If they are equal, we skip the next node by pointing the current node to the one after it. If they are different, we advance the current pointer forward. For example, with list 1, 1, 2, the first node matches the second, so we bypass it resulting in 1, 2. A challenge was preventing segmentation faults when checking the next node, which was handled by ensuring the loop condition verifies the next pointer is not null.

3. Time Complexity
Time Complexity: O(n)
Explanation: We iterate through the linked list once from start to finish, visiting every node once, so the time taken scales linearly with n.

4. Reflection

Is there a more efficient approach? No, linear time is optimal because every node must be inspected at least once.

What would you need to change? We could add explicit memory deallocation for skipped nodes to prevent memory leaks.

What complexity could the improved solution achieve? O(n) time and O(1) space.