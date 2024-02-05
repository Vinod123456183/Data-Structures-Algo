
/*
    inset at head and tail
*/

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;
    }
};

class linkedlist{
public:
    int size;
    Node* head;
    Node* tail;
    linkedlist(){
        size=0;
        head = tail = NULL;
    }

    void insert_at_head(int val){               //insert at aage
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insert__at__tail(int val){              // insert at peeche se
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void display(){                             // display function
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

};

int main() {
    linkedlist ll;
    ll.insert_at_head(10);
    ll.insert_at_head(20);
    ll.insert__at__tail(3);
    ll.insert__at__tail(9);
    ll.display();
}
