#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
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

int SearchElementinLL(Node* head, int element){
    Node* temp=head;
    while(temp){
        if(temp->data == element) return 1;
    }
    return 0;
}

int LengthofLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    #ifndef ONLINE_JUDGE
    // freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
    #endif
    vector<int> arr={13,1,5,7};
    Node* head=ConverttoLL(arr);
    Node* temp=head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<LengthofLL(head);
    cout<<SearchElementinLL(head,5);
    return 0;
}

