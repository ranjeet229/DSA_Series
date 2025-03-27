#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     //constructor...
//     Node(int data1, Node* next1){
//         data=data1;
//         next=next1;
//     }
// };
// we can use class as well b/c it allows abstraction, iscapsulation, inheritance
//self defined objects... 
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     //constructor...
//     Node(int data1, Node* next1){
//         data=data1;
//         next=next1;
//     }
// };


// int main(){
//     vector<int> arr={2,5,8,7};
//     Node* y=new Node(arr[0], nullptr);
//     cout<<y->data;
//}

            //Convert array to linked list...>>>>

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     public:
//     Node(int data1, Node* next1=nullptr){
//         data=data1;
//         next=next1;
//     }

// };
// //convert arr to LL...
// Node* convertArrtoLL(vector<int> &arr){
//     Node* head = new Node(arr[0]);
//     Node* mover=head;
//     for(int i=1; i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }
// int main(){
//     vector<int> arr={12 ,5,8,7};
//     Node* head=convertArrtoLL(arr);
//     cout<<head->data;
// }

            //Traversal in the Linked list...>>>

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
//convert arr to LL...
Node* convertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
//length of the linkedlist....

int lengthofLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
//Searching in ll

int checkIfPresent(Node* head, int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr={12 ,5,8,7};
    Node* head=convertArrtoLL(arr);
    // cout<<head->data;

//..............traversal in ll.....//
    // Node* temp=head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    // cout<<lengthofLL(head)<<endl;
    cout<<checkIfPresent(head, 10);
}
