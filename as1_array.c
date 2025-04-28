#include <stdio.h>
#include<stdlib.h>
//Global variable declared so that any function can access
int arr[10], size,element,index1;
//printing the array
void display(){
	int i;
    for(i = 0; i <size; i++){          
        printf("%d ",arr[i]);
    }
    printf(" \n");
}

//insertion function
void insertion()
{
   int i; 
   printf("Enter the element:- \n");
   scanf("%d", &element);
   printf("Enter the index:- \n");
   scanf("%d", &index1);
    for(i = size-1; i >= index1; i--){              
        arr[i+1] = arr[i];
    }
    arr[index1] = element;
    size++;
}

//deletion function
void deletion(){
   int i;
   printf("Enter the index:- \n");
    scanf("%d", &index1);
    for(i = index1; i < size-1; i++){
        arr[i] = arr[i+1];
     }
    size--;
}
//replace functon
void replace()
{
   int i; 
   printf("Enter the element:- \n");
   scanf("%d", &element);
   printf("Enter the index:- \n");
   scanf("%d", &index1);
   arr[index1] = element;
}

 
int main(){
    int i,choice;
    printf("Enter the number of elements you want to enter \n");
    scanf("%d", &size);

    printf("Enter the elements:- \n");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    while(1){
        printf("To insert an element press 1 \n");
        printf("To delete an element press 2 \n");
        printf("To replace an element press 3 \n");
        printf("To exit press 4 \n");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("The present Array \n");
            display();
            insertion();
            printf("The insterted array \n");
            display();
            break;

        case 2:
            printf("The present Array \n");
            display();
            deletion();
            printf("The insterted array \n");
            display();
            break;
            
        case 3:
            printf("The present Array \n");
            display();
            replace();
            printf("The replaced array \n");
            display();
            break;
        	
        case 4:	
            exit(0);
        default:
            printf("Invalid choice");
           
        }
    }
    
    return 0;
}
