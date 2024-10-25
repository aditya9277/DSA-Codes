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

Node* RemovesHeadofLL(Node* &head){
    if(head == NULL || head->next==NULL) return head;
    Node*temp = head;
    head=head->next;
    delete(temp);
    return head;
}

Node* RemovesTailofLL(Node* &head){
    if(head == NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete(temp->next);
    temp->next = nullptr;
}


Node* RemoveKth(Node* &head,int k){
    Node* temp = head;
    Node* prev = NULL;
    int ct=0;

    if(k==1){
        Node* temp1 = head;
        head = head->next;
        free(temp);
    }

    while(temp!=NULL){
        ct++;
        if(ct==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
}
int main(){ 
    // #ifndef ONLINE_JUDGE
    // // freopen("./input.txt", "r", stdin);
    // freopen("./output.txt", "w", stdout);
    // #endif
    vector<int> arr={13,11,15,17};
    Node* head=ConverttoLL(arr);
    // RemovesHeadofLL(head);
    // RemovesTailofLL(head);
    RemoveKth(head,5);
    print(head);
    return 0;   
}

