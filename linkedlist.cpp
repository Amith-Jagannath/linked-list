#include <iostream>
#include<conio.h>
void display();
void insertbeg();
void insertend();
void insertspecific();
using namespace std;
struct node
{

    int data;
    struct node *next;
}; struct node *head,*newnode,*temp,*current;

int main()
{  int a;

    head=0;

 int choice=1;
    while(choice==1){
            newnode=(struct node *)malloc(sizeof(struct node));
            cout<<"enter the data"<<endl;
    cin>>newnode->data;
    newnode->next=0;

    if(head==0)
    {
        head=temp=newnode;

    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    cout<<"enter the choice"<<endl;
    cin>>choice;
}
display();
cout<<"Insertion 1.beginning\n 2.end\n 3.specific \n";
cin>>a;
if(a==1){
insertbeg();
display();}
else
if(a==2){
        insertend();
display();
}else
if(a==3){
    insertspecific();
    display();
}
    return 0;
}
void display(){
temp=head;
while(temp!=NULL)
     {

    cout<<temp->data<<" ";
    temp=temp->next;
     }
}
void insertbeg()
{
   cout<<"enter the data to be inserted at beginning"<<endl;
   cin>>newnode->data;
     temp=head;
     head=newnode;
     newnode->next=temp;
     temp=head;
while(temp!=NULL)
     {

    cout<<temp->data<<" ";
    temp=temp->next;
     }

}


void insertend()
{
   cout<<"enter the data to be inserted at end"<<endl;
   cin>>newnode->data;
     temp=head;
     while(temp!=NULL)
     {
    temp=temp->next;
     }
     temp->next=newnode;
     newnode->next=0;

}
void insertspecific()
{  int pos;
    cout<<"enter the data to be inserted at specific position and its position"<<endl;
    cin>>newnode->data;
    cin>>pos;
    temp=head;
    int i=0;
    while(i<pos-1)
    {temp=temp->next;
    current=temp->next;
    }
    temp->next=newnode;
    newnode->next=current;

}

