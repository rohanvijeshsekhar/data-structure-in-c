#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max],front=-1,rear=-1
void requeue()
{
int elem;
if(rear==max-1)
{
printf("queue overflow")
return;
}
printf("enter the element to be enqueued:");
scanf("%d",&elem);
if(front==-1)
{
front=0
}
rear++
queue[rear]=elem;
printf("%d enqueued to the queue",elem);
}
void dequeue()
{
if(front==-1||front>rear)
{
printf("queue underflow");
return;
}
printf("dequeued element:%d",queue[front]);
front++;
if(front>rear)
{
front=rear=-1;
}
}
void display()
{
int i;
if(front=-1)
{
printf("queue is empty");
return;
}
printf("queue elements are;");
for(i=front;i<=rear;i++)
{
printf("%d",queue[i])
}
printf("\n");
}
int main()
{
int ch;
while(1)
{
printf("\n--queue menu--\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter yoiur choice");
scanf("%d",&ch);
switch(ch)
{
case1:
enqueue();
break;
case2:
dequeue();
break;
case3:
display();
break;
case4:
exit();
default
printf("\ninvalid choice")
}}
return0
}
