ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dum(0, head);
    ListNode* first = &dum;
    ListNode* second = &dum;
    for(int i = 0; i < n; i++) first = first->next;
    while(first->next){
        first = first->next;
        second = second->next;
    }
    ListNode* del = second->next;
    second->next = del->next;
    delete del;
    return dum.next;
}
