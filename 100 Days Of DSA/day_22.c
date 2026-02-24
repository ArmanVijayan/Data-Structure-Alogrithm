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

    for(int i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        printf("Read %d\n", x);

        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        printf("Added %d to front\n", x);
    }

    printf("Counting nodes:\n");
    int count = 0;
    struct Node* curr = head;
    while(curr != NULL) {
        printf("Node %d: data=%d\n", count+1, curr->data);
        count++;
        curr = curr->next;
    }

    printf("Total nodes: %d\n", count);

    return 0;
}
