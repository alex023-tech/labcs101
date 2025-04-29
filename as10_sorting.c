#include <stdio.h>   
 
void bubblesort(int arr[], int n) {   
  int i, j,temp;   
  for (i = 0; i < n - 1; i++) {   
    for (j = 0; j < n - i - 1; j++) {   
      if (arr[j] > arr[j + 1]) {   
        temp = arr[j];   
        arr[j] = arr[j + 1];   
        arr[j + 1] = temp;   
       }   
     }   
   }   
 }   
 
void selectionsort(int arr[], int n){   
    int i,j,min,temp;   
    for (i = 0; i < n-1; i++)     
    {   
        min=i; 
        for (j = i+1; j < n; j++)   
        if (arr[j] < arr[min])   
            min=j;  
        if(min!=i) { 
            temp = arr[min];   
            arr[min] = arr[i];   
            arr[i] = temp;   
           } 
      }   
  }   
void insertionsort(int arr[], int n) {   
    int i, key, j;   
    for (i = 1; i < n; i++) {   
        key = arr[i];   
        j = i - 1;   
        while (j >= 0 && arr[j] > key) {   
            arr[j + 1] = arr[j];   
            j = j - 1;   
        }   
        arr[j + 1] = key;   
    }   
  }   
   

void display(int arr[],int n) 
  { 
       int i; 
       printf("\n"); 
      for (i=0; i<n; i++)  
       printf("%d\t",arr[i]); 
       
  } 
   
int main() 
   { 
    int choice,arr[10],n,i; 
  while(1) 
   { 
    printf("\n1 for Bubble sort\n2 for selection sort\n3 for insertion sort\n4 for exit"); 
    printf("\nEnter your choice: "); 
    scanf("%d",&choice); 
    if(choice==6) 
      break; 
    printf("\nEnter size of array: "); 
    scanf("%d",&n); 
    printf("Enter array elements\n"); 
    for (i=0; i<n; i++)  
     scanf("%d",&arr[i]); 
    switch(choice)  
      { 
        
       case 1: bubblesort(arr,n); 
               break; 
       case 2: selectionsort(arr,n); 
               break; 
       case 3: insertionsort(arr,n); 
               break;         
        default:printf("invalid choice");            
   } 
     printf("\nsorted array"); 
   display(arr,n); 
    } 
     
  return 0; 
   } 