
//delete node from head.....>>>>>>
//delete node from tail ....>>>>
//delete node from position.....>>>>>
//delete node of value...>>>>

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
//remove head;
Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp; // or we can use free temp;
    return head;
}
//remove tail ....>>>
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free (temp->next);//or delete temp->next;
    temp->next=nullptr;
    return head;
}

//remove kth indx or position...>>>

Node* removeKthElement(Node* head, int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
//remove element on the basis of value;

Node* removeElement(Node* head, int el){
    if(head==NULL){
        return head;
    }
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={12, 8 ,4, 3};
    Node* head=convert_ArrTo_LL(arr);
    //head=removeHead(head);
    //head=removeTail(head);
    // head=removeKthElement(head, 4);
    head=removeElement(head, 4);
    print(head);
}