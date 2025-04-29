#include <stdio.h>  
#include <stdlib.h>  
void enque(int);  
void delque();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *front=NULL,*rear=NULL;  
  
int main ()  
{  
    int choice=0;  
	int val;   
    printf("\n*********Queue operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(1)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                printf("Enter the value: ");  
                scanf("%d",&val);
                enque(val);  
                break;  
            case 2:  
                delque();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:   
                printf("Exiting....");  
                exit(0);   
            default:  
                printf("Please Enter valid choice ");  
          }
     }
	 return 0;  
}  
void enque(int val)  
  {  
     
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
     {  
        printf("Queue Overflow");   
     }  
    else   
     { 
        ptr->val=val;
        ptr->next=NULL;
         if(front==NULL)
           front=rear=ptr;
         else
          { 
            rear->next=ptr;
            rear=ptr;
		   }
		printf("\nItem inserted %d", rear->val);
      }  
  }  
  
void delque()  
  {  
    int item;  
    struct node *ptr;  
    if (front == NULL)  
    {  
        printf("\nQueue Underflow");  
    }  
    else  
    {  
        item = front->val;  
        ptr = front;  
        front= front->next;  
        free(ptr);  
        printf("\nItem deleted %d ",item);  
          
    }  
 }  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=front;  
    if(ptr == NULL)  
    {  
        printf("Queue is empty\n");  
    }  
    else  
    {  
        printf("Printing Queue elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\t",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}
