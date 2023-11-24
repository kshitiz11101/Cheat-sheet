#include<stdio.h>
#include<stdlib.h>
void swap(int*a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int partition(int arr[],int s,int e){
    int pivot =arr[(s+e)/2];  //selecting the middle element as a pivot
    int i=s-1;
    int j=e+1;
    while (i < j) {
        do{
            i++;
            }while (arr[i] < pivot);
            do{
                j--;
                }while (arr[j] > pivot);
                if (i < j)
                swap(&arr[i],&arr[j]);
                }
                return j;   
}
void QuickSort(int arr[],int s,int e){
    if(s<e){
        int p=partition(arr,s,e);
        printf("pivot is %d\n",arr[p]);
        QuickSort(arr,s,p-1);
        QuickSort(arr,p+1,e);
        }
}
int main()
{
    int n,arr[30];
    printf("Enter the number of elements you want to sort:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        QuickSort(arr,0,n-1);
        printf("Sorted array is:");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
            }
    return 0;
}
