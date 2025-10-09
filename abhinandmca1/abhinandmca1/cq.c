#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
int isFull()
{	
	if((rear+1)%MAX==front)
	{
	  return 1;
	}
	return 0;
}
int isEmpty()
{
	if(front==-1 && rear==-1)
	{
	   return 1;
	}
	return 0;
}
void display()
{
  int i;
  if(isEmpty())
  {
    printf("\n QUEUE IS EMPTY \n");
    return;
  }
 
 printf("\n QUEUE ELEMENTS: \n");
 i=front;
 
 do
 {
 	printf("%d \n",queue[i]);
 	i=(i+1)% MAX;
 }
 	while(i!=(rear+1)% MAX);
 	printf("\n");
 }	
 void dequeue()
 {
  if(isEmpty())
  {
    printf("\n QUEUE IS EMPTY \n");
    return;
  }
  printf("\n %d is DELETED \n",queue[front]);
  if(front==rear)
  {
   front=rear=-1;
  }
  else
  {
    front=(front+1)% MAX;
  }
}
 void enqueue()
 {
  int x;
  if(isFull())
  {
   printf("\n QUEUE IS FULL \n");
   return;
  }
  printf("Enter the element to insert");
  scanf("%d",&x);
  if(isEmpty(1))
  {
  	front=rear=0;
  }
  else
  {
    	rear=(rear+1)%MAX;
  }
  queue[rear]=x;
  printf("\n ELEMENT %d INSERTED SUCCESSFULLY \n",queue[rear]);
  }
  void search()
  {
     int key,i,found=0;
     if(isEmpty())
     {
       printf("\n QUEUE IS EMPTY\n");
       return;
      }
     printf("\n Emter the element to search:");
     scanf("%d",&key);
     i=front;
     do
     {
     	if(queue[i]==key)
     	{       int pos=(i-front+MAX)%MAX+1;
     		printf("\n Element %d found at position %d.\n",key,pos);
     		
     		);
     		found=1;
     		break;
     	}
     	i=(i+1)%MAX;
     	}
     	while(i!=(rear+1)%MAX);
     	if(!found)
     	{
     	   printf("\n Elements %d not found in the queue.\n",key);
     	}
     }
     int main()
     {
       int choice;
       printf("\n CIRCULAR QUEUE \n");
       do
       {
       printf("\n 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.SEARCH \n 5.EXIT \n");
       printf("Enter your choice:");
       scanf("%d",&choice);
       switch(choice)
       {
       	case 1:enqueue();
       		break;
       	case 2:dequeue();
       		break;
       	case 3:display();
       		break;
       	case 4:search();
       		break;
       	case 5:printf("\n Exiting...\n");
       		return 0;
       	default:printf("\n Invalid Choice\n");
       		break;
       }
      }
       
       while(choice!=5);
       return 0;
    } 	
        
    
