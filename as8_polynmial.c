// C program to add two polynomials 
#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
int coeff; 
int pow; 
struct Node* next; 
}; 
struct Node* createnode(int c,int p) 
{ 
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node)); 
    newNode->coeff=c; 
    newNode->pow=p; 
    newNode->next = NULL; 
    return newNode; 
} 

struct Node* createpoly(struct Node* head) { 
struct Node*newNode,*ptr=head;  
int term,i,c,p; 
printf("Enter no. of terms:"); 
scanf("%d",&term); 
for(i=1;i<=term;i++) 
{ 
printf("Enter coefficient and power of term%d:",i); 
  scanf("%d %d",&c,&p); 
  newNode=createnode(c,p); 
  if(head==NULL) 
    head=ptr=newNode; 
  else 
    { 
     ptr->next=newNode; 
     ptr=newNode; 
    }   
   }    
    return head; 
} 
 
struct Node* addPolynomial(struct Node* head1, struct Node* head2) { 
    struct Node*newNode; 
    struct Node* temp,*head=NULL; 
    while(head1!=NULL&&head2!=NULL) 
  { 
   
      if (head1->pow > head2->pow) { 
            newNode=createnode(head1->coeff,head1->pow); 
            head1=head1->next; 
        } 
    else if (head2->pow > head1->pow) { 
       newNode=createnode(head2->coeff,head2->pow); 
            head2=head2->next; 
          } 
       else 
       { 
         newNode=createnode(head1->coeff+head2->coeff,head1->pow); 
   head1=head1->next; 
         head2=head2->next; 
         } 
         if(head==NULL) 
           { 
            head=temp=newNode; 
     } 
    else 
     { 
      temp->next=newNode; 
      temp=newNode; 
   }  
    } 
    while(head1!=NULL) 
     { 
      newNode=createnode(head1->coeff,head1->pow); 
        head1=head1->next; 
        temp->next=newNode; 
  temp=newNode; 
  } 
  while(head2!=NULL) 
     { 
      newNode=createnode(head2->coeff,head2->pow); 
        head2=head2->next; 
        temp->next=newNode; 
  temp=newNode; 
  } 
    return head; 
} 
 
void printpoly(struct Node* head) { 
    struct Node* ptr = head; 
    while (ptr != NULL) { 
     if(ptr->next==NULL) 
      printf("(%d^%d) ", ptr->coeff, ptr->pow); 
     else  
         printf("(%d^%d) + ", ptr->coeff, ptr->pow); 
        ptr = ptr->next; 
    } 
   printf("\n"); 
} 
 
int main() { 
     
    // 1st polynomial: 5x^2+4x^1+2x^0 
    printf("Enter 1st polynomial in descending order of power\n"); 
    struct Node* head1 =NULL;  
 head1=createpoly(head1); 
// 2nd polynomial: -5x^1-5x^0 
printf("Enter 2nd polynomial  in descending order of power\n"); 
struct Node* head2 =NULL;  
head2=createpoly(head2); 
struct Node* head3 = addPolynomial(head1, head2); 
printpoly(head1); 
printpoly(head2); 
printpoly(head3); 
return 0; 
} 