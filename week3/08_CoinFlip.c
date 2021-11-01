#include<stdio.h>
int main(){
    int t,i,g,j,k,n,q;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        scanf("%d",&g);
        for(j=0;j<g;j++){
            scanf("%d %d %d",&i,&n,&q);
            if(n%2==0){
                printf("%d\n",n/2);
            }
            else{
                if(i==q){
                    printf("%d\n",(n-1)/2);
                }
                else{
                    printf("%d\n",(n+1)/2);
                }
            }
        }
    }
    return(0);
}