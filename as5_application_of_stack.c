#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char x)
{
        top++;
        stack[top]=x;
}
char pop()
{
    char x;
   	x=stack[top];
    top--;
    return x;
}
int precedence(char ch)   
{   
    switch (ch)   
    {   
    case '+':   
    case '-':   
        return 1;   
  
    case '*':   
    case '/':   
        return 2;   
  
    case '^':   
        return 3;   
    }   
    return -1;   
}   

int main()
 {
 	char infix[100],postfix[100],c,temp;
 	int i,j;
 	printf("Enter infix expression:\n");
 	gets(infix);
 	j=0;
 	for(i=0;infix[i]!='\0';i++)
 	  {
 		
 		c=infix[i];
 		if(isalnum(c))
 	 	 {
 			postfix[j]=c;
 			j++;
		 }
		 else if(c=='(')
		 {
		 	push(c);
		 }
		 else if(c==')')
		  {
		  	while(1){
		  		temp=pop();
		  		if(temp=='(')
		  	    	break;
		  		postfix[j]=temp;
 		        j++;
			  }
		  }
		  else
		    {
		    	while(precedence(c)<=precedence(stack[top]))
		    	{
		    		postfix[j]=pop();
		    		j++;
				}
				push(c);
			}
		  }
		 while(top!=-1)
 		  {
 				postfix[j]=pop();
		    	j++;
		  }
 	      postfix[j]='\0';
 	      printf("\nPostfix expression = %s",postfix);
 	     
 	return 0;
 }
 /*
 Input: A+B*C+D
Output: ABC*+D+


Input: ((A+B)–C*(D/E))+F
Output: AB+CDE/*-F+  
*/