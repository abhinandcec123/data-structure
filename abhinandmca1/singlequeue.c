#include<stdio.h>
#include<stdlib.h>
struct node
{
 		int data;
 		struct node * link;
 };
 struct node * head=NULL;
 void enqueue()
 {
 	struct node*temp=head,*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	if(newnode==NULL)
 	{
 	printf("\n NO SPACE AVAILABLE \n");
 	return;
}
	newnode->link=NULL;
	printf("\n ENTER THE ELEMENT TO INSERT \n");
	scanf("%d",&newnode->data);
if(head==NULL){
head=newnode;
}
else{
while(temp->link!=NULL){
 temp=temp->link;
}
temp->link=newnode;
}
printf("\n %d ELEMENT INSERTED SUCCESSFULLY \n",newnode->data);
}
void dequeue()
{
  struct node* temp=head;
  if(head==NULL){
  printf("\n NO ELEMENTS \n");
  return;
}
printf("\n %d is DELETED\n",temp->data);
head=temp->link;
free(temp);
}
void display()
{
struct node* temp=head;
if(head==NULL){
	printf("\n NO ELEMENTS");
	return;
}
printf("\n ELEMENTS IN QUEUE ARE \n");
while(temp!=NULL){
 printf("%d ",temp->data);
 temp=temp->link;
 }
}
void search()
{
 struct node* temp=head;
 int key,pos=1,found=0;
  if(head==NULL)
  {
  	printf("\n Queue Empty\n");
  	return;
  }
  printf("\n Enter the element to search:\n");
  scanf("%d",&key);
  while(temp!=NULL)
  {
  	if(temp->data==key)
  	{
  		printf("\n%d element found at %d\n",temp->data,pos);
  		found=1;
  	}
  	pos++;
  	temp=temp->link;
  }
  if(!found)
  {
    	printf("\n Element Not Found");
  }
}
void main()
{
  	int choice;
  	do{
  	 	printf("\n *******QUEUE*********\n");
  	 	printf("\n1->ENQUEUE\n2->DEQUEUE\n3->DISPLAY\n4->SEARCH\n5->EXIT");
  	 	printf("\n ENTER THE CHOICE:\n");
  	 	scanf("%d",&choice);
  	 	switch(choice){
		case 1:enqueue();
		break;
		case 2:dequeue();
		break;
		case 3:display();
		break;
		case 4:search();
		break;
		case 5:printf("\n EXIT \n/");
		break;
		default:printf("Enter a valid choice");
		break;
}

}while(choice!=5);
}
 
