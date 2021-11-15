#include<stdio.h>
int main(){
    int res[100], count, arr[100], count0=0, count1=0,  i;
    printf("Enter number of elements : ");
    scanf("%d",&count);
    printf("Enter the elements.\n");
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    // COUNT each possible digits
    for(i=0;i<count;i++){
        if(arr[i]==1){
            count1+=1;
        }
        else if(arr[i]==0){
            count0+=1;
        }
    }
    // Create new array as result
    for(i=0;i<count0;i++){
        res[i]=0;
    }
    for(i=count0;i<count0+count1;i++){
        res[i]=1;
    }
    for(i=count1+count0; i<count; i++){
        res[i]=2;
    }
    printf("The result array is :\n");
    for(i=0;i<count;i++){
        printf("%d\n", res[i]);
    }
    return(0);
}