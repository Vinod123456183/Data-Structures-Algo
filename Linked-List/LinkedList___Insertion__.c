#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *start = NULL, *temp, *new1;

void create();
void display();
void insert_first();
void insert_last();
void insert_middle();

int main() { 

    int choice;
    do {
        printf("\n\t\t__________ Linked List __________\t\t");
        printf("\n\n");
        printf("\n\t\t\t\t1. Create\n\t\t\t\t2. Display\n\t\t\t\t3. Insert First\n\t\t\t\t4. Insert Middle\n\t\t\t\t5. Insert Last\n\t\t\t\t9. Exit");
        printf("\n\t\t\t\t___________________");
        printf("\n\n\n\n\t\tEnter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert_first(); break;
            case 4: insert_middle(); break;
            case 5: insert_last(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 9);

    return 0;
}

void create() {
    int n;
    char ch;
    printf("\n\n\t\tEnter data: ");
    scanf("%d", &n);
    
    start = (struct node*)malloc(sizeof(struct node));
    start->data = n;
    start->next = NULL;
    temp = start;
    
    printf("\n\n\t\tWant to continue (y/n)? ");
    scanf(" %c", &ch);
    
    while(ch == 'y' || ch == 'Y') {
        printf("\n\t\tEnter next element: ");
        scanf("%d", &n);
        new1 = (struct node*)malloc(sizeof(struct node));
        new1->data = n;
        new1->next = NULL;
        temp->next = new1;
        temp = temp->next;
        printf("\n\n\t\tWant to continue (y/n)? ");
        scanf(" %c", &ch);
    }
}

void display() {
    if(start == NULL) {
        printf("\n\t\tLinked list does not exist\n\t\t");
    } else {
        temp = start;
        printf("\n\t\tLinked List Elements are :");
        while(temp != NULL) {
            printf(" %d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void insert_first() {
    int n;
    printf("\n\t\tEnter data: ");
    scanf("%d", &n);
    new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = n;
    new1->next = start;
    start = new1;
}

void insert_last() {
    int n;
    if(start == NULL) {
        printf("\n\t\tLinked list does not exist\n");
        return;
    }
    
    printf("\n\t\tEnter data: ");
    scanf("%d", &n);
    new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = n;
    new1->next = NULL;
    
    temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new1;
}

void insert_middle() {
    int pos, n, i = 1;
    struct node *prev;
    
    printf("\n\t\tEnter data: ");
    scanf("%d", &n);
    new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = n;
    new1->next = NULL;
    
    printf("\n\t\tEnter position: ");
    scanf("%d", &pos);

    if(pos == 0) {
        insert_first();
        return;
    }

    temp = start;
    while(i < pos && temp != NULL) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    
    if(temp == NULL) {
        printf("\n\t\tPosition is greater than the number of nodes. Inserting at the end.\n");
        insert_last();
    } else {
        new1->next = temp;
        prev->next = new1;
    }
}
