#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;

        next=NULL;
    }
};
void InsetAtTail(Node* &head,int data)
{
    Node* n=new Node(data);

    if(head==NULL)
    {
        head=n;
        return ;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=n;
}
 void InsertAtHead(Node* &head,int data)
 {
     Node* n=new Node(data);
     n->next=head;
     head=n;
 }
void Display(Node* head)
{

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the node number : "<<endl;
    cin>>n;

    Node* head=NULL;
    int i;
    cout<<"Enter the Data :"<<endl;
    for(i=0;i<n;i++)
    {
        int data;
        cin>>data;
        InsetAtTail(head,data);
    }
    Display(head);
    cout<<"Do you want to insert data at the first : "<<endl;
    string s;
    cin>>s;
    if(s=="yes" || s=="YES")
    {
        cout<<"Enter the data you want to put : "<<endl;
        int data;
        cin>>data;
        InsertAtHead(head,data);
        Display(head);
    }
    else
    {
        Display(head);
    }
}
