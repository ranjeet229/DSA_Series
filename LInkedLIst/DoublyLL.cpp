

//Insertion and deletion in a doubly linked list...>>>>


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

//delete head node from 2DLL
Node* deleteHead(Node* head){
    if(head==NULL|| head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
//delete tail of the 2DLL>>.......>>>>>

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back; 
    prev->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
//delete the kth element in 2DLL.....>>>>>

Node* deleteKthElement(Node* head, int k){
    if(head==NULL){
        return NULL;
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
    Node* front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    prev->next=front;
    front->back=prev;

    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

//deleting the given node in doubly linked list
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return ;
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);

}


int main(){
    vector<int> arr={12, 5, 8 ,7};
    Node* head=convertArr2DLL(arr);
    //head=deleteHead(head);
    //head= deleteTail(head);
    // head=deleteKthElement(head, 2);
    deleteNode(head->next->next);
    print(head);
    return 0;
}