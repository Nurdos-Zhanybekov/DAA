struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *currA = headA;
    while (currA != NULL) {
        struct ListNode *currB = headB;
        while (currB != NULL) {
            if (currA == currB) {
                return currA;
            }
            currB = currB->next;
        }
        currA = currA->next;
    }
    return NULL;
}