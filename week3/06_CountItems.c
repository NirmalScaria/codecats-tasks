#include<stdio.h>
int main(){
    int n,arr[100],target,count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(arr[i]==target){
            count+=1;
        }
    }
    printf("%d\n",count);
    return(0);
}