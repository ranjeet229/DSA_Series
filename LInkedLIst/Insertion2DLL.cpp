
//Insertion at head;
//insertion at tail;
//insertion at kth position;
//insertion at given value;.....................>>>>>>>

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//convert array to doubly linked list of an array ....>>>>>>

Node* convertArr2DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

//Insertion at before the   head in 2DLL...>>>>
Node* insertBeforeHead(Node* head, int val){

    Node* newHead=new Node(val, head, nullptr);
    head->back=newHead;

    return newHead;
}

//Inserting before tail.....>>>>>>

Node* insertbeforeTail(Node* head, int val){
    if(head->next==NULL){
        return insertBeforeHead(head, val);
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newNode=new Node(val, tail, prev);
    prev->next=newNode;
    tail->back=newNode;

    return head;
}
//inserting element before kth value....>>>>
Node* insertingBeforeKthElement(Node* head,int k, int val){
    if(k==1){
        return insertBeforeHead(head, val);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode1=new Node(val, temp, prev);
    prev->next=newNode1;
    temp->back=newNode1;
    return head;
}

void insertingBeforeNode(Node* node, int val){
     Node* prev=node->back;
     Node* newNode2=new Node(val, node, prev);
     prev->next=newNode2;
     node->back=newNode2;
}
int main(){
    vector<int> arr={12, 5, 8 ,7};
    Node* head=convertArr2DLL(arr);
    // head=insertBeforeHead(head, 10);
    //head=insertbeforeTail(head, 10);
    //head=insertingBeforeKthElement(head, 4,10);
    insertingBeforeNode(head->next->next, 100);
    print(head);
    return 0;
}