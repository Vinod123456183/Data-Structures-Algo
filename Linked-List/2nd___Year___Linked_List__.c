#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *temp, *newNode;

void create();
void display();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();

int main() {
    int choice;

    do {
        printf("\n__________ Linked List __________");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert at First");
        printf("\n4. Insert at Middle");
        printf("\n5. Insert at Last");
        printf("\n6. Delete from First");
        printf("\n7. Delete from Middle");
        printf("\n8. Delete from Last");
        printf("\n9. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert_first(); break;
            case 4: insert_middle(); break;
            case 5: insert_last(); break;
            case 6: delete_first(); break;
            case 7: delete_middle(); break;
            case 8: delete_last(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 9);

    return 0;
}

void create() {
    int n;
    char ch;

    printf("Enter first element: ");
    scanf("%d", &n);
    
    start = (struct node*)malloc(sizeof(struct node));
    start->data = n;
    start->next = NULL;
    temp = start;

    printf("Want to continue (y/n)? ");
    scanf(" %c", &ch); // Notice the space before %c to consume any leftover newline

    while (ch == 'y' || ch == 'Y') {
        printf("Enter next element: ");
        scanf("%d", &n);

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = n;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;

        printf("Want to continue (y/n)? ");
        scanf(" %c", &ch);
    }
}

void display() {
    if (start == NULL) {
        printf("Linked list does not exist\n");
        return;
    }

    temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insert_first() {
    int n;
    printf("Enter element to insert at the beginning: ");
    scanf("%d", &n);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = start;
    start = newNode;    
}

void insert_last() {
    int n;
    printf("Enter element to insert at the end: ");
    scanf("%d", &n);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = NULL;

    if (start == NULL) {
        start = newNode;
        return;
    }

    temp = start;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_middle() {
    int pos, n;
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);
    printf("Enter element to insert at position %d: ", pos);
    scanf("%d", &n);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;

    if (pos == 1) {
        newNode->next = start;
        start = newNode;
        return;
    }

    temp = start;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void delete_first() {
    if (start == NULL) {
        printf("Linked list is empty. Cannot delete.\n");
        return;
    }

    struct node* temp = start;
    start = start->next;
    free(temp);
    printf("First node deleted.\n");
}

void delete_last() {
    if (start == NULL) {
        printf("Linked list is empty. Cannot delete.\n");
        return;
    }

    if (start->next == NULL) {
        free(start);
        start = NULL;
        printf("Last node deleted.\n");
        return;
    }

    temp = start;
    struct node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    free(temp);
    prev->next = NULL;
    printf("Last node deleted.\n");
}

void delete_middle() {
    if (start == NULL) {
        printf("Linked list is empty. Cannot delete.\n");
        return;
    }

    int pos;
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    if (pos == 1) {
        delete_first();
        return;
    }

    temp = start;
    struct node* prev = NULL;

    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node at position %d deleted.\n", pos);
}
