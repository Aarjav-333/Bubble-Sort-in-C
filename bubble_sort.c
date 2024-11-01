#include <stdio.h>
int main()
{
    int temp, n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)   
    {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n-----------------");
    printf("\nSorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
    
    
    
}
