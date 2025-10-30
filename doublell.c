#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*Llink;
	struct node*Rlink;
};
struct node*head=NULL;
void insertFirst()
{
struct node*newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
	printf("\n No Space Available")
	return;
}
	newnode->Llink=NULL;
	newnode->Rlink=NULL;
	printf("\n Enter the Element to insert");
	scanf("%d",&newnode->data);
if(head==NULL)
{
  head=newnode;
}
else
{
	newnode->Rlink=head;
	head->Llink=newnode;
	head=newnode;
}
	printf("\n %d inserted successfully",newnode->data);
}
void insertLast()
{
	struct node*newnode,*temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
  printf("\n Error:No Space Available for a new node.\n");
  return;
}
	newnode->Llink=NULL;
	newnode->RLink=NULL;
  printf("\n Enter the element to insert");
  scanf("%d",&newnode->data);
if(head==NULL)
{
 head=newnode;
}
else
{
while(temp->Rlink!=NULL)
{
 temp=temp->Rlink;
}
newnode->Llink=temp;
temp->Rlink=newnode;
}
	printf("%d inserted successfully",newnode->data);
}
void display()
{
struct node*temp=head;
if(head==NULL)
{
 	printf("\n NO ELEMENTS IN LIST");
 	return;
}
else
{
	printf("\n **ELEMENTS IN LIST**\n");
while(temp!=NULL)
{
	 printf("%d",temp->data);
 	 temp=temp->Rlink;
	}
   }
}
void insertLocation()
{
struct node*newnode,*temp=head,*nxt;
int key;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
	printf("\n Error:No Space avaiable for a new node.\n");
	return;
}
if(head==NULL)
{
	printf("\n List is Empty\n");
}
else
{
	printf("\n Enter the Key where after you want to insert the element \n");
	scanf("%d",&key);
while(temp!=NULL && temp->data!=key)
{
temp=temp->Rlink;
}
if(temp==NULL)
{
	printf("\n NO ELEMENT FOUND \n");
	return;
}
	printf("\n enter the element to insert \n");
	scanf("%d",&newnode->data);
if(temp->Rlink==NULL)
{
 newnode->Llink=temp;
 newnode->Rlink=NULL;
 temp->Rlink=newnode;
}
else
{
 nxt=temp->Rlink;
 newnode->Llink=temp;
 newnode->Rlink=nxt;
 temp->Rlink=newnode;
 nxt->Llink=newode;
}
	printf("%d inserted successfully",newnode->data);
	}
}
void deleteFirst()
{
struct node*temp=head,*nxt;
if(head==NULL)
{
 	printf("\n LIST EMPTY \n");
 	return;
}
printf("\n %d is deleted",temp->data);
if(temp->Rlink==NULL)
{
  head=NULL;
}
else
{
  nxt=temp->Rlink; 
  head=nxt;
  nxt->Llink=NULL;
} 
free(temp);
}

void deleteLast()
{
struct node*temp=head,*nxt;
if(head==NULL)
{
	printf("\n List is empty \n");
	return;
}
if(temp->Rlink==NULL)
{
	printf("\n %d is deleted",temp->data);
	head=NULL;
}
else
{
	while(temp->Rlink!=NULL)
	{
	  temp=temp->Rlink;
	}
	printf("\n %d is deleted",temp->data);
	next=temp->link;
	nxt->Rlink=NULL;
}
free(temp);
}

void deleteLocation()
{
  struct node*temp=head,*prev,*next
  int key;
  if(head==NULL)
  {
     printf("\n LIST IS EMPTY \n");
     return;
  }
  printf("\n Enter the key which you want to delete:\n");
  scanf("%d",&key);
  while(temp!=NULL && temp->data!=key)
  {
  	temp=temp->Rlink;
  }
  if(temp==NULL)
  {
    printf("\n NO ELEMENT FOUND \n");
    return;
  }
  if(temp->Llink==NULL)
  {
    head=temp->Rlink;
  if(head!=NULL)
  {
    head->Llink=NULL;
  }
}
else if(temp->Rlink==NULL)
{
	temp->Llink->Rlink=NULL;
}
else
{
   prev=temp->Llink;
   next=temp->Rlink;
   prev->Rlink=next;
   next->Llink=prev;
}
printf("%d Deleted Successfully \n",temp->data);
free(temp);
}
void search()
{
  int key,pos=0,found=0;
  struct node * temp=head;
  if(head==NULL)
  {
     printf("\n LIST EMPTY \n");
     return;
  }
  printf("\n Enter the key to search");
  scanf("%d",&key);
while(temp!=NULL)
{
  if(temp->data==key)
  {
   	printf("%d is found at location %d",temp->data.pos);
        found=1;
  }
  temp=temp->Rlink;
  pos++;
}
if(!found)
{
  printf("\n ELEMENT NOT FOUND \n");
}
void main()
{
  int choice;
  do
  {
    printf("\n *****DOUBLY LINKED LIST******\n");
    printf("\n 1->insertFirst \n 2->insertLocation \n 3->deleteFirst \n 4->deleteLast \n 5->
       

