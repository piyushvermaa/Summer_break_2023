                                //DOUBLY LINKED LIST//
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Node with value: "<<this->data<<" deleted."<<endl;
    }
};

void printll(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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

void insertathead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    //step 1: creating newnode
    Node* newnode = new Node(data);
    //step 2: linking newnode and head
    newnode->next=head;
    head->prev = newnode;
    //step 3: shift head to new head
    head = newnode;
}

void insertattail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newnode= new Node(data);
        head= newnode;
        tail= newnode;
        return;
    }
    //step 1
    Node* newnode= new Node(data);
    //step 2
    newnode->prev= tail;
    tail->next= newnode;
    //step 3
    tail= newnode;

}

void insertatposition(Node* &head, Node* &tail, int data, int position){
     if(head==NULL){
        Node* newnode= new Node(data);
        head= newnode;
        tail= newnode;
        return;
    }

    //case 1
    if(position<=1){
        insertathead(head,tail,data);
        return;
    } 
    //case 2
    int len = getlength(head);
    if(len<position){
        insertattail(head,tail,data);
        return;
    } 
    //case 3
    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    // Node* curr = prev->next;

    Node* newnode = new Node(data);

    // prev->next = newnode;
    // newnode->prev = prev;

    // curr->prev = newnode;
    // newnode->next = curr;

// without curr pointer
    newnode->next = prev->next;
    prev->next->prev = newnode;

    prev->next = newnode;
    newnode->prev = prev;


    return;


}

void deletefromposition(Node* &head, Node* &tail, int position){
    if(head==NULL){
        cout<<"linkedlist is already empty!!!"<<endl;
        return;
    }
    if(head->next==NULL){
        //SINGLE NODE
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len= getlength(head);
    if(position>len or position<0){
        cout<<"enter a valid position"<<endl;
        return;
    }
    if(position==len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
    }
    if (position==1){
        Node*temp = head;
        head = head->next;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    //DELETE THE NODE FROM THE MIDDLE OF A DOUBLY LINKED LIST

    Node* temp = head;
    int i=1;
    while(i<position){
        temp = temp->next;
        i++;
    }
    
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    temp->next=NULL;
    temp->prev=NULL;
    delete temp;

}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    printll(first);

    Node* head= first;
    Node* tail= third;

    insertathead(head,tail,101);
    cout<<endl;
    printll(head);
    cout<<endl;
    insertattail(head, tail, 202);
    printll(head);
    cout<<endl;
    insertatposition(head,tail, 303, 2);
    printll(head);
    cout<<endl;
    deletefromposition(head,tail, 1);
    printll(head);
    Node* prev = NULL;
    Node* curr = head;
    cout<<endl<<endl;
    
    return 0;
}