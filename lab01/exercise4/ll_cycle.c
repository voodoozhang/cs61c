#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(head==NULL)return 0;
    /* TODO: Implement ll_has_cycle */
    struct node *fast = head;
    struct node *slow = head;
    head = head->next;
    while (slow!=NULL){
        fast=fast->next;
        if(fast==NULL)return 0;
        if(slow==fast)return 1;
        fast=fast->next;
        if(fast==NULL)return 0;
        if(slow==fast)return 1;
        slow=slow->next;


        if(slow==fast)return 1;
    }
    return 0;
}
