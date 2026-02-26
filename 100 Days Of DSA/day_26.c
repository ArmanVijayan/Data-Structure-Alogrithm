#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    scanf("%d", &n);
    printf("Got n=%d\n", n);
    
    struct Node* head = NULL;
    struct Node* tail = NULL;
    
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        printf("Read %d\n", x);
        
        struct Node* node = malloc(sizeof(struct Node));
        printf("Allocated new node at %p\n", (void*)node);
        node->data = x;
        node->next = NULL;
        node->prev = tail;
        
        if(tail != NULL) {
            tail->next = node;
            printf("Linked prev tail->next to new node\n");
        } else {
            head = node;
            printf("First node - set as head\n");
        }
        tail = node;
        printf("Added %d (prev=%p, next=%p)\n", x, (void*)node->prev, (void*)node->next);
    }
    
    printf("Traversing forward from head:\n");
    struct Node* curr = head;
    int first = 1;
    while(curr != NULL) {
        printf("Visiting node data=%d at %p\n", curr->data, (void*)curr);
        if(!first) printf(" ");
        printf("%d", curr->data);
        first = 0;
        curr = curr->next;
    }
    printf("\nFinal output: ");
    
    curr = head;
    first = 1;
    while(curr != NULL) {
        if(!first) printf(" ");
        printf("%d", curr->data);
        first = 0;
        curr = curr->next;
    }
    printf("\n");
    
    return 0;
}
