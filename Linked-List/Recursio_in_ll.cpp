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

    // PRINTING ELEMENTS BY RECURSION 
    //base case
    void recursion_call(Node* head){
        Node* temp = head;
        if(temp == NULL) return;
        cout<<temp->val<<" ";
        recursion_call(temp->next);
    }

    // PRINTING ELEMENTS BY RECURSION IN REVERSE ORDER;

    void reverse_recursion_call(Node* head){
        if(head == NULL) return; // base case;
        reverse_recursion_call(head->next);
        cout<<head->val<<"  ";
    }

int main(){
    Node*a = new Node(10);
    Node*b = new Node(22);
    Node*c = new Node(33);
    Node*d = new Node(44);
    
    a->next = b;
    b->next = c;
    c->next = d;

    cout<<"PRINTING  ll RECURSION";
    // recursion_call(a);

    cout<<"PRINTING IN REVERSE ORDER BY RECURSION";
    reverse_recursion_call(a);
}
