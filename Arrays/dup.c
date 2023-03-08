/*C Program to remove duplicates element from an array*/

#include<stdio.h>

int main()
{
    int n, i, j,k;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int narr[n];
    printf("Enter values of array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    //Prints inputted array
    printf("Array without editing:");
    for(i=0;i<n;i++)
    printf("%d, ", arr[i]);
    
    for ( i=0; i<n; i ++)  
    {  
        for ( j=i+1; j<n; j++)  
        { 
            if ( arr[i] == arr[j])  
            {  
                for ( k=j; k<n-1; k++)  
                {  
                    arr[k] = arr[k+1];  
                }  
                //decreases size and index of array
                n--;   
                j--;      
            }  
        }  
    }  

    printf("\n");
    //Prints edited array
        printf("Array after editing\n");
    for(i=0;i<n;i++)
        printf("%d, ", arr[i]);
}

   
