#include<stadio.h>
#include<stdlib.h>
#define N 10
int stack[N];
int top=-1
void push();
void pop();
void peek();
void display();
void main()
{
  int ch;
  while(1)
  {
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:push();
             break;
      case 2:pop();
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
void push()
{
  int ele;
  printf("Enter element:\n");
  scanf("%d",&ele);
  if(top==N-1)
  {
    printf("Stack id full\n");
  }
  else
  {
    top++;
    stack[top]=ele;
  }
}
void pop()
{
  if(top==-1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    int item;
    item=stack[top];
    printf("Popped element is %d:",item);
    top--;
  }
}
void peek()
{
  if(top==-1)
  {
    printf("stack is empty\n");
  }
  else
  {
    printf("Peek element is:%d",stack[top]);
  }
}
void display()
{
  if(top==-1)
  {
    printf("Stack is empty");
  }
  else
  {
    for(int i=top;i>=0;i--)
      printf("%d",stack[i]);
  }
}      
