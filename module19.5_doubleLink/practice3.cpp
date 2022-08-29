#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *Next;
    Node(int val){
        value=val;
        Next=NULL;
    }

};
////////////////////////display//////
void display(Node *head)
{
     Node *temp=head;
    while(temp!=NULL)
    {

        cout<<temp->value;
    if(temp->Next!=NULL){
            cout<<"->";
    }
        temp=temp->Next;
    }
    cout<<endl;
}

void insertAtTail(Node* &head,int val)
{
    Node* newNode=new Node(val);
    Node* evenNode=new Node(-1);
    if(head==NULL)
    { if(val%2==0){
         head=evenNode;
         return;
    }
    else{
        head=newNode;
        return;
    }

    }
    Node *temp=head;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    if(val%2==0){
        temp->Next=evenNode;

        return;
    }
    else{
            temp->Next=newNode;

    return;
    }

}

int main(){
int n;
Node* head=NULL;
cin>>n;
int val;
while(n--){
  cin>>val;
  insertAtTail(head,val);
  display(head);
}
display(head);
}
