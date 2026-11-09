struct ListNode* sortList(struct ListNode* head) {
    if (!head || !head->next) return head;
    int swapped;
    struct ListNode* ptr1;
    struct ListNode* lptr = NULL;
    do {
        swapped = 0;
        ptr1 = head;
        while (ptr1->next != lptr) {
            if (ptr1->val > ptr1->next->val) {
                int temp = ptr1->val;
                ptr1->val = ptr1->next->val;
                ptr1->next->val = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
    return head;
}