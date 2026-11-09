bool hasCycle(struct ListNode *head) {
    if (!head) return false;
    int capacity = 1000;
    int size = 0;
    struct ListNode **visited = malloc(capacity * sizeof(struct ListNode*));
    struct ListNode *curr = head;
    while (curr) {
        for (int i = 0; i < size; i++) {
            if (visited[i] == curr) {
                free(visited);
                return true;
            }
        }
        if (size >= capacity) {
            capacity *= 2;
            visited = realloc(visited, capacity * sizeof(struct ListNode*));
        }
        visited[size++] = curr;
        curr = curr->next;
    }
    free(visited);
    return false;
}