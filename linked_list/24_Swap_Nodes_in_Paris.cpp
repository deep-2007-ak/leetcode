ListNode* swapPairs(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp && temp->next){
        ListNode* t = temp->next;
        temp->next = t->next;
        t->next = temp;
        if(prev == nullptr) head = t;
        else prev->next = t;
        prev = temp;
        temp = temp->next;
    }
    return head;
}
