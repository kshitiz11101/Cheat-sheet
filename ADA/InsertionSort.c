#include<stdio.h>
#include<stdlib.h>
void InsertionSort(int arr[],int n){
    int i,j,temp;
    for (i=1;i<n;++i) {
        temp=arr[i];
        j=i-1;
        while ((j>=0) && (arr[j]>temp)) {
            arr[j+1]=arr[j];
            j--;
            }
            arr[j+1]=temp;
            }
            printf("Sorted array is: \n");
            for (i=0;i<n;++i)
            printf("%d ",arr[i]);
            printf("\n");
}
int main()
{
    int n,arr[20];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i=0;i<n;++i)
    scanf("%d",&arr[i]);
    InsertionSort(arr,n);
    return 0;
}
