#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){ 
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
                }
    }
}
int main()
{ 
int n,arr[20];
printf("Enter the number of elements you want to sort:");
scanf("%d",&n);
printf("Enter the elements:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);
    printf("The sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
    return 0;
}
