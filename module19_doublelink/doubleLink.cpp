#include<bits/stdc++.h>
using namespace std;

/////////////////////double link class////////
class doubleNode{
public:
int value;
doubleNode *Next;
doubleNode *Prev;
doubleNode(int val)
{

    value=val;
    Next=NULL;
    Prev=NULL;
}
};
////////////////////to display the linked list////////////////////
void display(doubleNode *head){
doubleNode *temp=head;
while(temp!=NULL){

    cout<<temp->value<<" ";
    temp=temp->Next;
}
cout<<endl;
}
///////////////////////////to display the list in reverse way////////
void displayReverse(doubleNode *head){
doubleNode *temp=head;
while(temp->Next!=NULL){

    //cout<<temp->value<<" ";
    temp=temp->Next;
}
while (temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->Prev;
}
cout<<endl;
}
//////////////////////////////to find the length of the list//////////////////
int lengthList(doubleNode *head){
doubleNode *temp=head;
if(temp==NULL){
  return -1;
}
int k=1;
while(temp->Next!=NULL){

    //cout<<temp->value<<" ";
    temp=temp->Next;
    k++;
}
return k;
}
///////////////////////////////////////insertAt tail///////////////
void insertAtTail(doubleNode* &head,int val){
doubleNode* newNode=new doubleNode(val);
if(head==NULL){
    head=newNode;
    return;
}
doubleNode *temp=head;
while(temp->Next!=NULL){
    temp=temp->Next;
}
temp->Next=newNode;
newNode->Prev=temp;
return;
}
//////////////////////////////////insertAt head//////////////////
void insertAtHead(doubleNode* &head,int val){
doubleNode* newNode=new doubleNode(val);
if(head==NULL){
    head=newNode;
    return;
}
newNode->Next=head;
head->Prev=newNode;
head=newNode;
}
int main(){
doubleNode *head=NULL;
cout<<"1.To insert at tail "<<endl<<"2.To insert at head "<<endl<<"0.To exit"<<endl;

int c=100;
while(c!=0){
        int val;
    cout<<"Enter the choice "<<endl;
    cin>>c;
    switch(c){
case 1:
    cout<<"Enter the value "<<endl;
    cin>>val;
    insertAtTail(head,val);
    break;
case 2:
    cout<<"Enter the value "<<endl;
    cin>>val;
    insertAtHead(head,val);
    }
    }
    display(head);
     if(lengthList(head)==-1){
        cout<<"The list is NULL"<<endl;
    }
    else{
       cout<<lengthList(head);
    }
    displayReverse(head);
    if(lengthList(head)==-1){
        cout<<"The list is NULL"<<endl;
    }
    else{
       cout<<lengthList(head);
    }

}

