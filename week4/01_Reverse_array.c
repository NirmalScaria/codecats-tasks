#include<stdio.h>
int main(){
    int arr[100],i=1,count;
    printf("Enter number of items : ");
    scanf("%d",&count);
    printf("Enter the elements.\n");
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    // Swapping the last element with first element, and so on.
    int l=0, r=count-1, temp;
    while(l<r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
        printf("Swapped 1");
    }
    printf("Reversed array is : \n");
    for(i=0; i<count; i++){
        printf("%d\n", arr[i]);
    }
    return(0);
}