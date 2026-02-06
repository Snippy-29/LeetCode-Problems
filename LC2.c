/**
 * Definition for singly-linked list.
**/

# include <stdio.h>
# include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* t1 = l1;
    struct ListNode* t2 = l2;
    int carry = 0,c;

    struct ListNode* h2 = malloc(sizeof(struct ListNode));
    h2->next = NULL;
    struct ListNode* t3 = h2;

    while(t1!=NULL && t2!=NULL){
        struct ListNode *temp = malloc(sizeof(struct ListNode));
        c = t1->val + t2->val + carry;
        temp->val = c%10;
        temp->next = NULL;
        carry = c/10;
        
        
        t3->next = temp;
        t3 = temp;

        t1 = t1->next;
        t2 = t2->next;
    }
    while(t1 != NULL){
        struct ListNode *temp = malloc(sizeof(struct ListNode));
        c = t1->val + carry;
        temp->val = c%10;
        temp->next = NULL;
        carry = c/10;

        t3->next = temp;
        t3 = temp;

        t1=t1->next;
    }
    while(t2!=NULL){
        struct ListNode *temp = malloc(sizeof(struct ListNode));
        c = t2->val + carry;
        temp->val = c%10;
        temp->next = NULL;
        carry = c/10;

        t3->next = temp;
        t3 = temp;

        t2=t2->next;
    }
    if(carry != 0){
        struct ListNode *temp = malloc(sizeof(struct ListNode));
        temp->val = carry;
        temp->next = NULL;

        t3->next = temp;
        t3 = temp;
    }
    
    return h2->next;
}