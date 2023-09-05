//find the middle node of a linkedlist
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//creating node
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        cout<<"Node with value: "<<this->data<<" deleted!!!"<<endl;
    }
};

//printing linkedlist
void printll(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<endl;
}

int getlength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void inserttail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newnode= new Node(data);
        head= newnode;
        tail= newnode;
        return;
    }

    //step 1
    Node* newnode = new Node(data);
    //step 2
    tail->next= newnode;

    //step 3
    tail = newnode;

}

Node* getmiddle(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow !=NULL and fast != NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;

}

Node* reverseknodes(Node* &head, int k){
    if(head == NULL){
        cout<<"linked list is empty"<<endl;
        return NULL;
    }
    int len = getlength(head);
    if(k > len){
        return head;
    }
    

    //it means number of nodes in LL is >=k

    //step 1: reverse first k nodes of linkedlist
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count=0;
    while (count<k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    //step 2: recursive call
    if(forward!=NULL){
        //we still have node to reverse
       head->next = reverseknodes(forward,k);
    }

    return prev; 
}

bool checkforloop(Node* &head){
    if(head==NULL){
        return false;
    }
    if( head->next == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(fast==slow){
            return true;
        }
    }
    return false;
}
int main()
{
    Node* head= NULL;
    Node* tail = NULL;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        inserttail(head,tail,x);
    }
    int k;
    cin>> k;
    head = reverseknodes(head,k);
    printll(head);

    // cout<<"MIDDLE OF THE NODE IS : "<<getmiddle(head)->data<<endl;
    

    return 0;
}