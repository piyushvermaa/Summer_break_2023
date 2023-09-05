//SINGLY LINKED LIST//

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

//i want to insert a node right at the head of the linkedlist
void inserthead(Node* &head, Node* &tail, int data){
      if(head==NULL){
        Node* newnode= new Node(data);
        head= newnode;
        tail= newnode;
        return;
    }

    //step 1
    Node* newnode = new Node(data);
    //step 2
    newnode->next = head;
    //step 3
    head = newnode; 
}

//I want to insert a node right at the tail of the linkedlist
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
//lenght of linkedlist

int findlength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}

//insert at position

void inseratposition(Node* &head, Node* &tail, int data, int position){
    // if LL is empty
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if(position<=0){
        inserthead(head,tail,data);
        return;
    }

    int len = findlength(head);

    if(len<=position){
        inserttail(head, tail, data);
        return;
    }

    //step 1: find the position -> prev & curr
    int i=1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    //step 2: create a new node
    Node* newnode = new Node(data);
    //step 3: 
    newnode->next = curr;
    //step 4:
    prev->next = newnode;
}

//delete a node from a position
void deletenode(Node* &head, Node* &tail, int position){
    if(head==NULL) {
        cout<<"Cannot delete, linked list is empty"<<endl;
        return;
    }

    //case 1 : delete from first
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    //case 2 : delete from end
    int len = findlength(head);

    if(len==position){
        //step 1: find prev
        int i=1;
        Node* prev = head;
        while (i < position - 1){
            prev = prev->next;
            i++;
        }
        //step 2:
        prev->next = NULL;
        //step 3: 
        Node* temp = tail;
        //step 4:
        tail = prev;
        //step 5:
        delete temp;
        return;
    }
    //case 3: delete form middle
        //step 1: find prev
        int i=1;
        Node* prev = head;
        while (i < position - 1){
            prev = prev->next;
            i++;
        }
        //step 2: find curr
        Node* curr = prev->next;
        //step 3: link prev with curr next
        prev->next = curr->next;
        //step 4:
        curr->next = NULL;
        //step 5:
        delete curr;

}

//reverse a linked list

//method 1: recursive
Node* reverse(Node* &prev, Node* &curr){
    if(curr == NULL){
        //LL reverse ho chuki hai
        return prev;
    }

    //solving 1 case
    Node* forward = curr->next;
    curr->next = prev;

    //recursive call 
    //as our prev. pointer move to curr and our curr. pointer move to forward
    reverse(curr, forward);
    
}

//method 2: iterative
Node* reverseusingloop(Node* &head){
    Node* prev = NULL;
    Node* curr = head;

    while (curr!=NULL)
    {
        Node* temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    return prev;
}
int main(){

    // Node* head = new Node(10);
    
    // inserthead(head,20);
    // inserthead(head,30);
    // inserthead(head,40);
    // inserthead(head,50);
    // inserthead(head,60);

    // Node* head = NULL;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     inserthead(head,data);
    // }

    // cout<<"Printing the linked list"<<endl;

    // printll(head);



    Node* head = NULL;
    Node* tail = NULL;
    
    inserthead(head,tail,20);
    inserthead(head,tail,30);
    inserthead(head,tail,40);
    inserttail(head,tail,50);
    inserttail(head,tail,60);
    inserttail(head,tail,100);

 
    cout<<"Printing the linked list"<<endl;

    printll(head);

    inseratposition(head, tail, 9999, 6);

    printll(head);

    // deletenode(head, tail,7);

    // printll(head);

    // deletenode(head, tail, 1);

    // printll(head);

    // deletenode(head,tail,2);

    // printll(head);

    Node* prev = NULL;
    Node* curr = head;

    head = reverse(prev,curr);
    printll(head);
    head = reverseusingloop(head);
    printll(head);
    return 0;
}





















int main2()
{
    //basic..
    //syntax to creat node
    Node* head = new Node();

    //creating nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    //linking nodes to the next node
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    cout<<"Printing the linked list"<<endl;

    printll(first);
    
    return 0;
}