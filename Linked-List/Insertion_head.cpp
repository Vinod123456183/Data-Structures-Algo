// /*
//     only head access
// */



// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class linked{
// public:
//     int size;
//     Node* head;
//     Node* tail;
//     linked(){
//         size = 0;
//         head = NULL;
//         tail = NULL;
//     } 
//     void insert_at_head(int val){
//         Node* temp = new Node(val);
//         if(size == 0){
//             head = tail =temp;
//         }
//         else{
//             temp->next = head;
//             head = temp;
//         }
//         size++;
//     }

// void display(){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }


// };
// int main(){
//     linked ll;
//     Node* a =new Node(10);
//     Node* b =new Node(20);
//     Node* c =new Node(7);
//     Node* d =new Node(98);
//     Node* e =new Node(99);

//     a->next=b;
//     b->next =c;
//     c->next=d;
//     d->next=e;

//     ll.display();
//     cout<<endl;
//     ll.insert_at_head(456);
//     ll.display();
// }



/*
    adding element when we have access of head and tail
    
*/





/***
 *  insert at head
*/
#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    int size;
    Node* head ;
    Node* tail ;
    LinkedList(){
        head =  tail = NULL;
        size = 0;
    }
    void insertAthead(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp =  temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;       // == vector<int>v;    khail linked list
    ll.display();
    ll.insertAthead(21);
    ll.insertAthead(10);
    ll.display();
    ll.insertAthead(881);
    ll.display();
    ll.insertAthead(11);
    ll.display();

}
