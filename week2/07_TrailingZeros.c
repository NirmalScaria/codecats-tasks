#include<stdio.h>
int main(){
    int t,x,result=0;
    scanf("%d",&t);
    while(t>0){
        --t;
        scanf("%d",&x);
        result=0;
        while(x){
            x/=5;
            result+=x;
        }
        printf("%d\n",result);
    }
    return(0);
}