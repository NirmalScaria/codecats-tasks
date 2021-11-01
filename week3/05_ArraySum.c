#include<stdio.h>
int main(){
    int arr[100],n,s1=0,s2=0,s3=0,s4=0,s5=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        s1+=arr[i];
        if(arr[i]%2==0){
            s2+=arr[i];
        }
        else{
            s3+=arr[i];
        }
        if(i%2==0){
            s4+=arr[i];
        }
        else{
            s5+=arr[i];
        }
    }
    printf("%d %d %d %d %d\n",s1,s2,s3,s4,s5);
    return(0);
}
