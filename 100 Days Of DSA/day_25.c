//Problem: Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.

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
    printf("Got n=%d\n", n);

    struct Node* head = NULL;
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        printf("Read %d\n", x);
        struct Node* node = malloc(sizeof(struct Node));
        node->data = x;
        node->next = head;
        head = node;
        printf("Added %d to front\n", x);
    }

    int key;
    scanf("%d", &key);
    printf("Searching for key=%d\n", key);

    int count = 0;
    struct Node* curr = head;
    printf("Traversing list:\n");
    while(curr != NULL) {
        printf("Node data=%d ", curr->data);
        if(curr->data == key) {
            printf("(match! count=%d)\n", ++count);
        } else {
            printf("\n");
        }
        curr = curr->next;
    }

    printf("Total occurrences: %d\n", count);

    return 0;
}
