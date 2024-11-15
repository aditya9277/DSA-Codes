#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=nullptr; 
    }
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* ConverttoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
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
}

Node* InsertHead(Node* head, int val){
    Node* temp = new Node(val,head);
    return temp;
    
}
Node* InsertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;

    return head;
}

Node* InsertatKth(Node* head,int k, int val){
    int cnt=0;
    Node* temp = head;
    if(head == NULL){
        if(k==1) return new Node(val);
        else return NULL;
    }
    if(k==1){
        return new Node(val,head);
    }
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node* x = new Node(val, temp->next);
            temp->next=x;
            return head;
        }
        temp=temp->next;
    }
}

int main(){ 
    
    vector<int> arr={13,11,15,17};
    Node* head=ConverttoLL(arr);
    head = InsertatKth(head, 5, 69);        
    print(head);
    return 0;   
}

