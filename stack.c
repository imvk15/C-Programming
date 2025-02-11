#include<stdio.h>
#include<stdlib.h>
#define size 4

int top=-1, arr[size];

void push();
void pop();
void display();

int main()
{
int choice;
while(1)
{
printf("\nPerform operation in stack:\n");
printf("\n1.Push\n2.Pop\n3.Display\n4.End\n");
printf("\nEnter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nInvalid Choice !");
}
}
}

void push()
{
int x;
if (top==size-1)
printf("\nOverflow !\n");
else
{
printf("\nEnter the elements to be added in stack:");
scanf("%d",&x);
top++;
arr[top]=x;
}
}

void pop()
{
if (top==-1)
printf("\nUnderflow !\n");
else
{
printf("\nPopped element = %d\n",arr[top]);
top--;
}
}

void display()
{
if (top==-1)
printf("\nUnderflow !\n");
else
{
printf("\nElements in the stack:\n");
for(int i=top;i>=0;--i)
printf("%d\n",arr[i]);
}
}