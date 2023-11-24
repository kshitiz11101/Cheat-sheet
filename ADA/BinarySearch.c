#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
            }
            else if (arr[mid] > key) {
                high = mid - 1;
                }
                else {
                    low = mid + 1;
                    }
                    mid=low+(high-low)/2;
    }
                             return -1;
                    }

int main()
{
    int n,arr[50],key;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        printf("Enter the key element to be searched:");
        scanf("%d",&key);
        int result=BinarySearch(arr,n,key);
        if(result==-1){
            printf("Element is not present in the array");
            }
            else{
                printf("Element is present at index %d",result);
                }
                return 0;

}
