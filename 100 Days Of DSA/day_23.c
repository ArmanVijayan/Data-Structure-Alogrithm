#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    scanf("%d", &n);
    printf("List1 n=%d\n", n);

    struct Node* l1 = NULL;
    for(int i=0; i<n; i++) {
        int x; scanf("%d", &x);
        struct Node* node = malloc(sizeof(struct Node));
        node->data = x;
        node->next = l1;
        l1 = node;
        printf("Added to l1: %d\n", x);
    }

    int m;
    scanf("%d", &m);
    printf("List2 m=%d\n", m);

    struct Node* l2 = NULL;
    for(int i=0; i<m; i++) {
        int x; scanf("%d", &x);
        struct Node* node = malloc(sizeof(struct Node));
        node->data = x;
        node->next = l2;
        l2 = node;
        printf("Added to l2: %d\n", x);
    }

    printf("Merging...\n");
    struct Node head = {0};
    struct Node* tail = &head;

    while(l1 && l2) {
        if(l1->data < l2->data) {
            printf("l1 smaller: %d\n", l1->data);
            tail->next = l1;
            l1 = l1->next;
        } else {
            printf("l2 smaller: %d\n", l2->data);
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = l1 ? l1 : l2;

    printf("Result: ");
    struct Node* curr = head.next;
    while(curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
