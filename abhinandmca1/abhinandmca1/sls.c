#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * link;
};
struct node * top=NULL;
void push()
{
  struct node * newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  if(newnode==NULL){
  printf("\n No Space available\n");
  return;
}
newnode->link=NULL;
printf("\n Enter the element to insert\n");
scanf("%d",&newnode->data);
if(top==NULL){
	top=newnode;
}
else{
newnode->link=top;
top=newnode;
}
printf("\n %d INSERTED SUCCESSFULLY",newnode->data);
}
void pop()
{
struct node * temp=top;
if(top ==NULL){
	printf("\n STACK UNDERFLOW");
	return;
}
printf("\n %d is popped",temp->data);
top=temp->link;
free(temp);
}
void display()
{
struct node* temp=top;
if(top==NULL){
	printf("\n NO ELEMENTS ");
	return;
}
	printf("\n ELEMENTS IN STACK ARE:\t");
while(temp!=NULL){
	printf("%d\t",temp->data);
	temp=temp->link;
}
}
void peek()
{
 struct node* temp=top;
 if(top==NULL){
 	printf("\n STACK UNDERFLOW");
 	return;
 }
 printf("Top Elements is %d",temp->data);
 }
void search()
{
struct node* temp=top;
int key,found=0,pos=1;
if(top==NULL){
printf("\n STACK UNDERFLOW\n");
return;
}
printf("\n ENTER THE ELEMENT TO SEARCH\n");
scanf("%d",&key);
while(temp!=NULL){
if(temp->data==key){
printf("\n %d ELEMENT FOUNDED at %d\n",temp->data,pos);
found=1;
}
 pos++;
 temp=temp->link;
}
if(!found){
 printf("\n ELEMENT NOT FOUND");
 }
}
void main()
{
int choice;
do{
printf("\n ****STACK****\n");
printf("\n 1->Push,\n 2->Pop,\n 3->Peek,\n 4->Display,\n 5->Search,\n 6->EXIT");
printf("\n ENTER THE CHOICE\n");
scanf("%d",&choice);
switch(choice){
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3:peek();
		break;
	case 4:display();
		break;
	case 5:search();
		break;
	case 6:printf("\n EXIT \n/");
		break;
	default:printf("Enter a valid choice");
		break;
}

}while(choice!=6);
}
 
