#include<stdio.h>
int main(){
    int n,arr[100],smallest,smallest2,largest,largest2,i;
    printf("How many elements : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallest=arr[0];
    largest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    smallest2=smallest+1;
    largest2=largest-1;
    for(i=0;i<n;i++){
        if(arr[i]<smallest2 && arr[i]!=smallest){
            smallest2=arr[i];
        }
        if(arr[i]>largest2 && arr[i]!=largest){
            largest2=arr[i];
        }
    }
    printf("The smallest element is %d\n",smallest);
    printf("The second smallest element is %d\n",smallest2);
    printf("The largest element is %d\n",largest);
    printf("The second largest element is %d\n",largest2);
}
//Edge cases might fail. Not rigorously tested or anything.