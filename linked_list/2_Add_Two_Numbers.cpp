ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode ans(0);
    ListNode* p = &ans;
    int carry = 0;
    while(l1 || l2 || carry){
        int s = carry;
        if(l1){
            s += l1->val;
            l1 = l1->next;
        }
        if(l2){
            s += l2->val;
            l2 = l2->next;
        }
        carry = s / 10;
        p->next = new ListNode(s % 10);
        p = p->next;
    }
    return ans.next;
}
