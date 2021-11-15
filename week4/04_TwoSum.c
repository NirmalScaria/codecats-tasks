#include<stdio.h>
int main(){
    int target, arr[100], l, r, count, i;
    printf("Enter number of elements : ");
    scanf("%d",&count);
    printf("Enter the sorted array.\n");
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target sum : ");
    scanf("%d", &target);
    l=0;
    r=count-1;
    while(l<r){
        if(arr[l]+arr[r]==target){
            break;
        }
        else if(arr[l]+arr[r]<target){
            l++;
        }
        else{
            r--;
        }
    }
    if(arr[l]+arr[r]==target){
        printf("The indices are %d and %d\n",l,r);
    }
    else{
        printf("NOT POSSIBLE\n");
    }
    return(0);
}