
            //Problems on linkedList....>>>>>

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

//convert arr to doubly linked list....>>>
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

//Ques 1: Find Middle of the linked list...>>>>

Node* MiddleLL(Node* head){ 
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

// ques 2: Find the Reverse of the linkedList....>>>> Tortoise and hare algorithm...

Node* ReverseLL(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while( temp!=NULL){
        Node* front= temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

//Ques 3: Detect a loop or cycle in a LinkedList.....>>>>>Tortoise and hare algorithm >>>

bool DetectCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow== fast){
            return true;
        }
    }
    return false;
}

//Ques 4: Starting Node of a loop or cycle in linked list.......>>>>>

Node* StartingNodeofCYCle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;

            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

//Ques 5: Length of a loop in the Linked list....>>>>

int findLength(Node* slow, Node* fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int findLengthofLoop(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast= fast->next->next;

        if(slow==fast){
            return findLength(slow, fast);
        }
    }
    return 0;
}

//QUes-6:Group odd and even linked list.....>>>

Node* OddEvenList(Node* head){
    Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;

    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
    return head;
}

//Ques 7: remove nth node from the end of linked list ......>>>>>>>>

Node* removeNthFromEnd(Node* head, int n){
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    while( fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    Node* delNode= slow->next;
    slow->next=slow->next->next;
    delete delNode;
    return head;
}

//Ques 8: Delete middle node of the linked list ....>>>>

Node* DeleteMiddleNodeLL(Node* head){
    Node* slow=head;
    Node* fast=head;
    fast=head->next->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return head;
}

//Ques 9: Sort the linked list .....>>>>>
//we have to implement three function findMiddle, mergetwolist...>>

Node* findMiddle(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* mergeTwoLists(Node* list1, Node* list2){
    Node* dummyNode=new Node(-1);
    Node* temp=dummyNode;
    while(list1 !=NULL && list2 !=NULL){
        if(list1->data < list2->data){
            temp->next=list1;
            temp=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            temp=list2;
            list2=list2->next;
        }
    }
    if(list1) temp->next=list1;
    else temp->next=list2;

    return dummyNode->next;
}
Node* sortedLinkedList(Node* head){
      if(head==NULL || head->next==NULL){
        return head;
      }
      Node* middle=findMiddle(head);
      Node* right=middle->next;
      middle->next=nullptr;
      Node* left=head;
      left= sortedLinkedList(left);
      right=sortedLinkedList(right);
      return mergeTwoLists(left, right);
}

//Ques 10: sort a linked list of 0's 1's and 2's....>>>.

Node* sortListofLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* zerohead=new Node(-1);
    Node* onehead=new Node(-1);
    Node* twohead=new Node(-1);

    Node* zero=zerohead;
    Node* one = onehead;
    Node* two=twohead;
    Node* temp=head;

    while(temp!=NULL){
        if(temp->data == 0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data == 1){
            one->next=temp;
            one = temp;
        }else{
            two->next=temp;
            two = temp;
        }
        temp=temp->next;
    }
    zero->next=(onehead->next)? (onehead->next) : (twohead->next);
    one->next=twohead->next;
    two->next=NULL;
    Node* newhead=zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return newhead;
}

//Ques 11 : Add 1 to a number represented by LL.............>>>>>

int addHelper(Node* temp){
    if(temp==NULL){
        return 1;
    }
    int carry=addHelper(temp->next);
    temp->data+=carry;
    if(temp->data<10){
        return 0;
    }
    temp->data=0;
    return 1;
}

Node* addOne(Node* head){
    int carry =addHelper(head);
    if(carry==1){
        Node* newNode=new Node(1);
        newNode->next=head;
        head=newNode;
    }
    return head;
}

//Ques 12: adding two number in a linked list ......>>>>>>


int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArr2DLL(arr);
    // head=MiddleLL(head);
    // head=ReverseLL(head);
    // DetectCycle(head);
    // head=StartingNodeofCYCle(head);
    // findLengthofLoop(head);

    // head=OddEvenList(head);
    //  head=removeNthFromEnd(head, 2);
    // head=DeleteMiddleNodeLL(head);

    // head=sortedLinkedList(head);

    // head=sortListofLL(head);
    head=addOne(head);
    print(head);
}