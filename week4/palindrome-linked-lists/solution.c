bool isPalindrome(struct ListNode* head) {
    if (head == NULL) {
        return true;
    }
    int count = 0;
    struct ListNode* curr = head;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    int* arr = (int*)malloc(count * sizeof(int));
    curr = head;
    for (int i = 0; i < count; i++) {
        arr[i] = curr->val;
        curr = curr->next;
    }
    for (int i = 0; i < count / 2; i++) {
        if (arr[i] != arr[count - 1 - i]) {
            free(arr);
            return false;
        }
    }
    free(arr);
    return true;
}