#include <stdio.h> 
 int itr1,itr2; 
int linsearch(int array[], int x, int n) 
{ 
  int i; 
   for (i = 0; i < n; i++){ 
        itr1++; 
        if (array[i] == x) 
            return i; 
       }
    return -1; 
} 
int binarysearch(int array[], int x, int low, int high) 
  { 
    int mid; 
    while (low <= high) { 
        itr2++; 
        mid = (low+high)/ 2; 
        if (array[mid] == x) 
            return mid; 
        if (array[mid] < x) 
            low = mid + 1; 
         else 
            high = mid - 1; 
    } 
     return -1; 
 } 
int main() 
{ 
    int array[20],n,val,i,choice,result; 
    printf("Enter size of array:"); 
    scanf("%d",&n); 
    printf("Enter elements of arrayin ascending order:\n"); 
    for(i=0;i<n;i++) 
      scanf("%d",&array[i]); 
    while(1)  { 
      
  printf("\nPress 1 for linear search\nPress 2 for binary search\nPress 3 for exit"); 
     printf("\nEnter your choice:"); 
     scanf("%d",&choice); 
        if(choice==3) 
          break; 
     switch(choice) 
       { 
        case 1: 
            itr1=0; 
           printf("Enter value to search:"); 
            scanf("%d",&val); 
            result=linsearch(array,val,n); 
            if(result==-1) 
              printf("Element not found"); 
             else    
              printf("Element found at index: %d", result); 
             printf("\nNumber of iterations in linear search=%d",itr1); 
     break; 
   case 2:  
      itr2=0; 
                                 printf("Enter value to search:"); 
            scanf("%d",&val); 
            result=binarysearch(array,val,0,n-1); 
            if(result==-1) 
              printf("Element not found"); 
             else    
              printf("Element found at index: %d", result); 
             printf("\nNumber of iterations in binary search=%d",itr2); 
       break; 
                                                default: printf ("Wrong Choice");      
     } 
     } 
     
   } 