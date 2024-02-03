#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
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
        size = 0;
        head = tail = NULL;
    }

    void insert_head(int val){      
        Node* temp =new Node(val);
        if(size == 0) head=tail=temp;
        else{
            temp->next =head;
            head=temp;
        }
        size++;
    }

    void insert_tail(int val){
        Node* temp = new Node(val);
        if(size == 0) head= tail = temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

    void insert___at___any__index(int val , int index){
        if(index == 0) insert_head(val);    // means it should add on the first
        else if(size == index)  insert_tail(val);
        else if(index < 0 || index > size)  cout<<"Invalid";
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=index-1; i++) temp=temp->next;
            t->next = temp->next;
            temp->next=t;
            size++;
        }
        //we have not write here because invalid me size++ ho jaega
    }

    int get_index(int index){
        if(index == size)      return head->val;
        else if(index < 0 || index >= size) {           //imp point
            cout<<"Invalid"<<endl;
            return -1;
        }
        else{
            Node* temp = head;
            for(int i=1; i<=index; i++) {
                temp=temp->next;
            }
            return temp->val;
        }
    }

    void delete_at_head() {
        if(size == 0) {
            cout<<"List is Empty"<<endl;
            return;                     //disrect return taakii aage ki statement nahi chale
        }
        else{                           // 0 ke alava sare 1 , 2 , 3 , ......n
            head=head->next;
            size--;
        }
    }

    void delete_at_tail() {
        if(size == 0) {
            cout<<"list is empty";
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != tail) {
                temp=temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void delete_at_index(int index) {
        if(size == 0) {
            cout<<"list is Empty"<<endl;
            return;
        }
        else if(index == 0)     delete_at_head();
        else if(index == size-1) delete_at_tail();
        else if(index<0 || index>=size) {
            cout<<"Invalid Index"<<endl;
            return;
        }

        else{
            Node* temp = new Node(index);
            for(int i= 1; i<=index-1 ; i++) {
                temp = temp->next;
            }   
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main(){
    linkedlist ll;
    ll.insert_head(10);
    ll.insert_head(20);
    ll.insert_tail(9);
    ll.insert_tail(8);
    ll.display();
    cout<<endl;
    ll.insert___at___any__index(40 ,3);
    ll.display();
    cout<<endl;
    cout<<ll.get_index(0)<<endl;
    cout<<ll.get_index(1)<<endl;
    cout<<ll.get_index(2)<<endl;
    ll.display();
    cout<<endl;
    ll.delete_at_head();
    ll.display();
    cout<<endl;
    ll.delete_at_tail();
    ll.delete_at_index(2);
    ll.display();
}
