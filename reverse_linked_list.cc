class Solution {
public:
    ListNode* recursion(ListNode* prev,ListNode* top,ListNode* temp)
    {
        top->next=prev;
        if(temp==NULL) return top;
        return recursion(top,temp,temp->next);
    }
    
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* top=head, *temp=head->next;
        top->next=NULL;
        return recursion(top,temp,temp->next);
    }
};
