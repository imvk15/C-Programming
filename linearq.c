#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void enqueue();
void dequeue();
void display();

int rear=-1, front=-1, inp_arr[SIZE];

int main()
{
int choice;
while(1)
{
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nInvalid choice !\n");
}
}
}

void enqueue()
{
int num;
if(rear==SIZE-1)
printf("\nOVERFLOW !\n");
else
{
if(front==-1)
front=0;
printf("\nInsert the number in queue:");
scanf("%d",&num);
rear=rear+1;
inp_arr[rear]=num;
}
}

void dequeue()
{
if(front==-1||front>rear)
printf("\nUnderflow !\n");
else
{
printf("\nDeleted number from queue:%d\n",inp_arr[front]);
front=front+1;
}
}

void display()
{
if(front==-1)
printf("\nEmpty queue !\n");
else
{
printf("\nQueue:\n");
for(int i=front;i<=rear;i++)
printf("%d\n",inp_arr[i]);
}
}