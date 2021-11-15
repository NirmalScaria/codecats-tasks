#include<stdio.h>
int main(){
    int arr[100], res[100], count, i, k;
    printf("Enter number of items : ");
    scanf("%d", &count);
    printf("Enter the array elements. \n");
    for(i=0; i<count; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k : ");
    scanf("%d", &k);
    // Doing the rotate operation
    for(i=0; i<count; i++){
        res[(i+k)%count]=arr[i];
    }
    printf("Rotated array is : \n");
    for(i=0; i<count; i++){
        printf("%d\n", res[i]);
    }
    return(0);
}