#include<stdio.h>
int main(){
    int initial_position, total_time, test_cases, i;
    scanf("%d",&test_cases);
    // Using pattern found in the jump positions
    for(i=0;i<test_cases; i++){
        scanf("%d %d",&initial_position, &total_time);
        if(initial_position%2 == 0){
            if(total_time % 4 ==0){
                printf("%d\n",initial_position);
            }
            else if(total_time % 4 == 1){
                printf("%d\n", initial_position-total_time);
            }
            else if(total_time % 4 ==2) { 
                printf("%d\n", initial_position+1);
            }
            else{
                printf("%d\n", initial_position+total_time+1);
            }
        }
        else{
            if(total_time % 4 ==0){
                printf("%d\n",initial_position);
            }
            else if (total_time%4==1){
                printf("%d\n",initial_position+total_time);
            }
            else if (total_time%4==2){
                printf("%d\n",initial_position-1);
            }
            else{
                printf("%d\n",initial_position-total_time-1);
            }
        }
    }
    return(0);
}