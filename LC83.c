# include <stdio.h>

/**
 * Definition for singly-linked list.
**/

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *q;
    struct ListNode *p;

    if (head == NULL)
    {
        return head;
    }
    
    for(q = head; q->next != NULL; q=q->next){
        for(p = q; p != NULL; p=p->next){
            if(q->val == p->val){
                p->next = p->next->next;
            }
        }
    }
    return head;
}