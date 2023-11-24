#include<stdio.h>
#include<stdlib.h>
void SelectionSort(int arr[],int n){
    int i,j,min_idx,temp;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx])
            min_idx=j;
            }
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            }
            
            
}
int main()
{
    
int n,arr[20];
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    }
    printf("The array before sorting is:");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
        }
        printf("\n");
        SelectionSort(arr,n);
        printf("The array after sorting is:");
        for(int k=0;k<n;k++)
        {
            printf("%d ",arr[k]);
            }
            printf("\n");
    return 0;
}
