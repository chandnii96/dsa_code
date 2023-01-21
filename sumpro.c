#include <stdio.h>   
// Find maximum between two numbers. 
int max(int num1, int num2) 
{ 

    return (num1 > num2) ? num1 : num2; 
} 
/* Returns the product of max product subarray.*/
int maxSubarrayProduct(int arr[], int n) 
{ 

    // Initializing result 

    int result = arr[0]; 

  

    for (int i = 0; i < n; i++) { 

        int mul = arr[i]; 

        // traversing in current subarray 

        for (int j = i + 1; j < n; j++) { 

            // updating result every time 

            // to keep an eye over the maximum product 

            result = max(result, mul); 

            mul *= arr[j]; 

        } 

        // updating the result for (n-1)th index. 

        result = max(result, mul); 

    } 

    return result; 
} 

  
// Driver code 

int main() 
{ 
    int i,n;
    int arr[10];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
      printf("%d",arr[i]);

    n = sizeof(arr) / sizeof(arr[0]); 
    int max = 0;
    int k = maxSubarrayProduct(arr, n);
    printf(" %d \n",k );
for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            if(k%arr[i]==0 ){
            max += arr[i];
            }
        }
    }
 printf(" %d \n",max);
 return 0; 
}