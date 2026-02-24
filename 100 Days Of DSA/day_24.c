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
    printf("List size: %d\n", n);

    struct Node* head = NULL;
    for(int i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        printf("Added %d\n", x);
        struct Node* node = malloc(sizeof(struct Node));
        node->data = x;
        node->next = head;
        head = node;
    }

    int key;
    scanf("%d", &key);
    printf("Delete key: %d\n", key);

    struct Node* curr = head;
    struct Node* prev = NULL;

    while(curr != NULL && curr->data != key) {
        printf("Check %d != %d\n", curr->data, key);
        prev = curr;
        curr = curr->next;
    }

    if(curr != NULL) {
        printf("Found %d to delete\n", key);
        if(prev == NULL) {
            head = curr->next;
        } else {
            prev->next = curr->next;
        }
        free(curr);
    } else {
        printf("Key %d not found\n", key);
    }

    printf("After delete: ");
    curr = head;
    while(curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
