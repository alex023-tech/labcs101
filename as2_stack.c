#include<stdio.h>
#include<stdlib.h>
#define max 3 //maximum size of the stack
int stack[10],top=-1;
void push(int x);
int pop();
void display();
int main()
{
    int choice,x;
   while(1)
    {
    	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

            	printf(" Enter a value to be pushed:");
                scanf("%d",&x);
                push(x);
                break;
            
            case 2:
            
                x=pop();
                if(x!=-9999)
                    printf("\n\t The popped elements is %d",x);
                break;
            
            case 3:
            
                display();
                break;
            
            case 4:
                         exit(0);
            default:
            
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            
                
        }
    }
    
    return 0;
}
//push function
void push(int x)
{
    if(top==max-1)
    {
        printf("\n\tSTACK is oveflow");
        
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
//pop function
int pop()
{
	int x;
    if(top==-1)
    {
        printf("\n\t Stack is undeflow");
    }
    else
    {
    	x=stack[top];
        top--;
        return x;
    }
    return -9999;//when stack is underflow;
}
//display function
void display()
{
	int i;
    if(top==-1)
      {
    	 printf("\n The STACK is empty");
      }
    else
    {
       printf("\n The elements in STACK ");
        for(i=top; i>=0; i--)
            printf("\t%d",stack[i]);
           
    }
   
}