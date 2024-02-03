/*
Cpp program to Create a Binary Tree To do
->Display Element , Max Element in BTree , Sum Of Nodes ,Size , Levels
*/

#include<iostream>
#include<climits>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    } 
};

void display(Node* root){

    if(root == NULL) return;
    cout << root->val << "  ";
    display(root->left);
    display(root->right);   
}


int sum(Node* root) {
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node* root) {
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int big(Node* root) {
    if(root == NULL) return 0;
    return max(root->val , max(big(root->left),big(root->right)));
}

int levels(Node* root) {
    if(root->left == NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    cout<<endl;
    display(a);
    cout<<endl;

    cout << sum(a) << endl;
    cout<<endl;

    cout << size(a) << endl;
    cout<<endl;

    cout << big(a) << endl;
    cout<<endl;

    cout << levels(a) << endl;
    cout<<endl;
}
