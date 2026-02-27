#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertLast(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* curr = *head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

int length(struct Node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

struct Node* findIntersection(struct Node* head1, struct Node* head2) {
    int len1 = length(head1);
    int len2 = length(head2);

    struct Node *ptr1 = head1, *ptr2 = head2;

    if (len1 < len2) {
        struct Node* temp = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
        int t = len1;
        len1 = len2;
        len2 = t;
    }

    int diff = len1 - len2;
    while (diff > 0) {
        ptr1 = ptr1->next;
        diff--;
    }

    while (ptr1 != NULL && ptr2 != NULL) {
        printf("Checking: %d vs %d\n", ptr1->data, ptr2->data);
        if (ptr1->data == ptr2->data) {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL;
}

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    struct Node* list1 = NULL;
    printf("Enter first list: ");
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        insertLast(&list1, x);
    }

    int m;
    printf("Enter m: ");
    scanf("%d", &m);
    struct Node* list2 = NULL;
    printf("Enter second list: ");
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        insertLast(&list2, x);
    }

    struct Node* intersect = findIntersection(list1, list2);
    if (intersect != NULL) {
        printf("Intersection node: %d\n", intersect->data);
    } else {
        printf("No Intersection\n");
    }

    while (list1 != NULL) {
        struct Node* temp = list1;
        list1 = list1->next;
        free(temp);
    }
    while (list2 != NULL) {
        struct Node* temp = list2;
        list2 = list2->next;
        free(temp);
    }

    return 0;
}
