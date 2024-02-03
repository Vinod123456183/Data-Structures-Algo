// linked list class insert at head and tail

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

class LINKEDLIST{
public:
    int size;
    Node* head;
    Node* tail;
    LINKEDLIST(){
        head=tail=NULL;
        size=0;
    }
    void insert_tail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display() {
        Node* temp =head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    LINKEDLIST x;
    x.insert_tail(10);
    x.insert_tail(1);
    x.insert_tail(79);
    x.insert_tail(94);
    x.insert_tail(3);
    x.insert_tail(20);
    x.display();
    cout<<endl;
    cout<<"SIZE OF LINKED LIST IS :"<<" "<<x.size;

}
