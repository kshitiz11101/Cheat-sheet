
#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)            
        {
            return i;
        }        
    }
            return -1;
}
int main()
{
    int n, arr[50],key;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        }
        printf("Enter the key to be searched\n");
        scanf("%d",&key);
        int result = LinearSearch(arr,n,key);
        if(result==-1)
        {
            printf("Element is not present in array");
            }
            else
            {
                printf("Element is present at index %d",result);
                }
                return 0;

}
