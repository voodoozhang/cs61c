#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    struct node *start=head;
    head=head->next;
    while (head!=NULL){
        if(head==start)return 1;
        head=head->next;
    }
    return 0;
}
