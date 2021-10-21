#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N];
int rear=-1;
int front=-1;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
 int ch;
 while(1)
 {
 printf("Enter choice");
 scanf("%d",&ch);
 switch(ch) {
 case 1:enqueue();
 break;
 case 2:dequeue();
 break;
 case 3:peek();
 break;
 case 4:display();
 break;
 case 5:exit(0);
 default:printf("Invalid case\n");
 }
 }
}
void enqueue()
{
  int ele;
  printf("Enter element:");
  scanf("%d",&ele);
  if(rear==N-1)
  {
    printf("Queue is Full\n");
  }
  else if(rear==-1 & front==-1)
  {
    rear=front=0;
    queue[rear]=ele;
  }
  else
  {
    rear++;
    queue[raer]=ele;
  }
}
void dequeue()
{
  if(raer==-1 & front==-1)
  {
    printf("Queue is empty\n");
  }
  else if(rear==front)
  {
    front=rear=-1;
  }
  else
  {
    int item;
    item=queue[front];
    print("Popped element is:%d",item);
    front++;
  }
}
void peek()
{
  if(raer==-1 &front==-1)
  {
    printf("Queue is empty\n");
  }
  else
  {
    printf("Peek element is:%d",queue[front]);
  }
}
void diaplay()
{
  if(rear==-1 & front==-1)
  {
    printf("Queue is empty\n");
  }
  else
  {
    for(int i=front;i<raer+1;i++)
    {
      printf("%d",queue[i]);
    }
  }
}
