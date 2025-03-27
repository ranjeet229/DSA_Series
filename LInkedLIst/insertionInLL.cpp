//Insertion at head;
//insertion at tail;
//insertion at position;
//insertion at value;

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1=nullptr){
        data=data1;
        next=next1;
    }

};

Node* convert_ArrTo_LL(vector<int> & arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//inseting new node...>>>>

Node* insertNode(Node* head, int val){
    return new Node(val, head);
}
//inserting at end ....>>>>
Node* insertTail(Node* head, int val ){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode =new Node(val);
    temp->next=newNode;
    return head;
}

//inserting at given kth position...>>>
Node* insertPosition(Node* head, int el, int k){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }else{
            return head;
        }
    }
    if(k==1){
        return new Node(el, head);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==(k-1)){
            Node* x = new Node(el, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insert_Before_Value(Node* head, int el, int val){
    if(head==NULL){
       return NULL;
    }
    if(head->data==val){
        return new Node(el, head);
    }
    Node* temp=head;
    while(temp->next!=NULL){

        if(temp->next->data==val){
            Node* x = new Node(el, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={12, 8 ,4, 3};
    Node* head=convert_ArrTo_LL(arr);
   // head=insertNode(head, 15);
   // head=insertTail(head, 100);
  // head=insertPosition(head, 100, 4);
    head=insert_Before_Value(head, 100,12);
    print(head);
}