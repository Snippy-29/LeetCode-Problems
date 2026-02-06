/**
 * Definition for singly-linked list.
 **/

 # include <stdio.h>
 # include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head;
    struct ListNode *h = head;
    
    while(p != NULL && p->next!=NULL){
        p=p->next->next;
        h=h->next;

        if(p == h){
            return true;
        }
    }

    return false;
}