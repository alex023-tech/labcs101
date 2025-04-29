#include <stdio.h>
#include <stdlib.h>
# define SIZE 3
void enque(char x);
void delque();
void display();
char queue[SIZE];
int rear = - 1;
int front = - 1;
int main()
{
    int ch;
    char x;
    while (1)
    {
        printf("1.enque Operation\n");
        printf("2.delque Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            	  printf("Element to be inserted in the Queue : ");
                  scanf(" %c", &x);
                  enque(x);
                  break;
            case 2:
                  delque();
                  break;
            case 3:
                  display();
                  break;
            case 4:
                  exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
    return 0;
} 
 
void enque(char x)
{
    
    if (rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (front == - 1)
              front = 0;
        rear = rear + 1;
        queue[rear] = x;
    }
} 
 
void delque()
{
    if (front == - 1 || front > rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %c\n", queue[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1||front>rear)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (i = front; i <= rear; i++)
            printf("%c\t", queue[i]);
        printf("\n");
    }
} 