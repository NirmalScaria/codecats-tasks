#include<stdio.h>
int main(){
    int count, arr[100],i, target, mid;
    printf("Enter the number of elments : ");
    scanf("%d", &count);
    printf("Enter the sorted elements.\n");
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target : ");
    scanf("%d",&target);
    int l=0, r=count-1;
    // DOING BINARY SEARCH
    while(l<r){
        mid = (l+r)/2;
        if(arr[mid] == target){
            l=r;
        }
        else if(arr[mid] < target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(arr[mid]>=target){
        printf("The result position is %d.\n",mid);
    }
    else{
        printf("The result position is %d.\n",mid+1);
    }
    return(0);
}