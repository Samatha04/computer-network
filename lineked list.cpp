#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *head=NULL;
void createlist(int);
void insertbegin();
void insertend();
struct node*createnode()
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the data");
 scanf("%d",&newnode->data);
 newnode->link=NULL;
 return newnode;
}
void createlist(int n)
{
 int i,data;
 struct node*node1,*temp;
 for(i=0;i<n;i++)
 {
  node1=createnode();
  if(head==NULL)
  {
   head=node1;
  }
  else
  {
   temp=head;
   while(temp->link!=NULL)
   temp=temp->link;
   temp->link=node1;
  }
 }
}
void insertbegin()
{
 struct node*node1;
 node1=createnode();
 node1->link=head;
 head=node1;
}
void insertend()
{
 struct node*node1,*temp;
 node1=createnode();
 temp=head;
 if(head==NULL)
 {
  printf("link is empty");
 }
 else
 {
  while(temp->link!=NULL)
  temp=temp->link;
  temp->link=node1;
  node1->link=NULL;
 }
}
void traversal()
{
 struct node*temp;
 temp=head;
 if(temp==NULL)
 {
  printf("\n list is empty");
 }
 else
 {
  while(temp!=NULL)
  {
   printf("%d->",temp->data);
   temp=temp->link;
  }
 }
}
int main()
{
 int n;
 printf("enter n value");
 scanf("%d",&n);
 createlist(n);
 insertbegin();
 insertend();
 traversal();
}
