#include<stdio.h>
int main(){
    int arr[100], count, i, uniqueItems[100], isFound, j, uniqueCount=0, itemCount=0;
    printf("Enter number of elements : ");
    scanf("%d",&count);
    printf("Enter the elements. \n");
    for(i=0; i<count; i++){
        scanf("%d",&arr[i]);
    }
    // Creating an array of unique elements.
    for(i=0;i<count;i++){
        isFound=0;
        for(j=i+1;j<count;j++){
            if(arr[i]==arr[j]){
                isFound=1;
            }
        }
        if(!isFound){
            uniqueItems[uniqueCount]=arr[i];
            uniqueCount++;
        }
    }
    // For each unique item, count for occurences in arr.
    for(i=0; i<uniqueCount; i++){
        itemCount=0;
        for(j=0;j<count; j++){
            if(arr[j]==uniqueItems[i]){
                itemCount++;
            }
        }
        printf("Item %d with frequency %d\n",uniqueItems[i],itemCount);
    }
}