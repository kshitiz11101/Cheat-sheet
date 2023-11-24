#include<stdio.h>
#include<stdlib.h>
void MergeSort(int arr[],int s,int e){
    if(s<e){
        int mid = (s+e)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,e);
        Merge(arr,s,mid,e);
        }

}
void merge(int arr[],int s,int e,int mid){
    int i,j,k,n1,n2;
    n1 = mid - s + 1;
    n2 = e - mid;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    L[i] = arr[s + i];
    for(j=0;j<n2;j++)
    R[j] = arr[mid + 1+ j];
    i=0;
    j=0;
    k=s;
    while((i < n1) && (j < n2)){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
            }
            else{
                arr[k] = R[j];
                j++;
                }
                k++;
                }
                while(i < n1){
                    arr[k] = L[i];
                    i++;
                    k++;
                    }
                    while(j < n2){
                        arr[k] = R[j];
                        j++;
                        k++;
                    }
}
int main()
{
    int n,arr[20];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    MergeSort(arr,0,n-1);
    printf("Sorted array is:");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
