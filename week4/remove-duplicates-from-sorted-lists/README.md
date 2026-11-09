1. Problem
Remove all nodes in a singly linked list that contain a specific target value and return the new head.

2. Approach
We first handle any leading nodes that match the target value by moving the head pointer forward. Then, we use a current pointer to scan through the rest of the list, checking if the next node holds the target value. If it does, we bypass it by updating the next pointer; otherwise, we advance the current pointer. For example, skipping a node containing the target value to connect the preceding node directly to the succeeding one. A challenge was handling cases where multiple matching nodes appear consecutively at the beginning, solved by using a while loop for head updates.

3. Time Complexity
Time Complexity: O(n)
Explanation: We visit each node in the linked list a constant number of times during a single pass, so the time grows linearly with the number of nodes n.

4. Reflection

Is there a more efficient approach? No, a single pass is already optimal.

What would you need to change? Nothing fundamental.

What complexity could the improved solution achieve? O(n) time and O(1) space.