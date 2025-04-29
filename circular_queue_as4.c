#include <stdio.h>
#include <stdlib.h>
# define SIZE 3
void cenque(char x);
void cdelque();
void display();
char cqueue[SIZE];
int rear = - 1;
int front = - 1;
int main()
{
    int ch;
    char x;
    while (1)
    {
        printf("1.cenque Operation\n");
        printf("2.cdelque Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            	  printf("Element to be inserted in the Queue : ");
                  scanf(" %c", &x);
                  cenque(x);
                  break;
            case 2:
                  cdelque();
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
 
void cenque(char x)
{
    
    if ((rear+1)%SIZE==front)
       printf("Overflow \n");
    else
    {
        if (front == - 1)
              front =rear= 0;
        else     
        rear = (rear + 1)%SIZE;
        cqueue[rear] = x;
    }
} 
 
void cdelque()
{
    if (front == - 1 && rear==-1)
    {
        printf("Underflow \n");
    }
    else
    {
        printf("Element deleted from the Queue: %c\n", cqueue[front]);
        if(front==rear)
         front=rear=-1;
        else
		 front=(front+1)%SIZE; 
        
    }
} 
 
void display()
{
    int i;
    if (front == - 1&&rear==-1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (i = front; i != rear; i=(i+1)%SIZE)
            printf("%c\t", cqueue[i]);
         printf("%c\t", cqueue[rear]);   
        printf("\n");
    }
} 
