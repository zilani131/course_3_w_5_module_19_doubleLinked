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
///////////////////////////return array///////////
struct position{
public:
    int a[1000];

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
//////////////////////////insert at position//////////////
void insertAtPos(doubleNode* &head,int val,int pos){
    int s=lengthList(head)+1;

if(pos<=0|| pos>s){
    cout<<"The position is not valid";
    return;
}

////////////////////position at head////////////////
if(pos==1){
    insertAtHead(head,val);
    return;
}
if(pos==s){
    insertAtTail(head,val);
    return;
}
cout<<pos<<endl;
int k=1;

doubleNode *newNode=new doubleNode(val);
doubleNode *temp=head;
while(k<pos-1){
//cout<<pos<<endl;
    temp=temp->Next;
    k++;
}
cout<<k;
newNode->Next=temp->Next;
temp->Next->Prev=newNode;
temp->Next=newNode;
newNode->Prev=temp;
}

int searchValueUni(doubleNode* &head,int val){
if(head==NULL){
    return -1;
}
else{
        int k=1;
    doubleNode* temp=head;
    while(temp!=NULL){

        if(temp->value==val){
            return k;
        }
            k++;
            temp=temp->Next;
    }
    return -1;
}
}
//////////////////////////////////search value in multiple value ///////////////////

position searchValueDouble(doubleNode* &head,int val){
if(head==NULL){
 cout<<"The list is empty"<<endl;

}
else{
        position pos;

        int k=1;
        int ctn=1;
    doubleNode* temp=head;
    while(temp!=NULL){

        if(temp->value==val){
            pos.a[k]=ctn;
            k++;
        }
            ctn++;
            temp=temp->Next;
    }
if(k==1){
cout<<"Value is not in the list"<<endl;

}
else {
    pos.a[0]=k;
    return pos;
}
}
}
int main(){
doubleNode *head=NULL;
cout<<"1.To insert at tail "<<endl<<"2.To insert at head "<<endl<<"3.Insert At specific position"<<endl<<"4.Search a value unique "<<endl<<"5.Search a value in duplicate"<<endl;


cout<<"0.To exit"<<endl;

int c=100;
while(c!=0){
        int val,pos;
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
    break;
    /////////////////////////////////
case 3:
    cout<<"Enter the value ";
    cin>>val;
    cout<<"Enter the position ";
    cin>>pos;
insertAtPos(head,val,pos);
    break;
    ////////////////////////////////////////////////////search value unique///////////
case 4:
    cout<<"Enter the value ";
    cin>>val;
 int k;
 k=searchValueUni(head,val);
 if(k==-1){
    cout<<"The value is not in the list ";
 }
 else{
    cout<<k<<endl;
 }
 break;
case 5:
   cout<<"Enter the value ";
    cin>>val;
    position pos=searchValueDouble(head,val);
    for(int i=1;i<pos.a[0];i++){
        cout<<pos.a[i]<<" ";
    }
    break;
}
    }

    display(head);

    displayReverse(head);
    if(lengthList(head)==-1){
        cout<<"The list is NULL"<<endl;
    }
    else{
       cout<<lengthList(head);
    }

}
