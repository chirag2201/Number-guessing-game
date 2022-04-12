#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int n,guess,nguesses=1;
    srand(time(0));
    n = rand()%100 + 1;

    //keep running the loop until the  number is guessed
    do{
        printf("guess the number between 1 to 100 : ");
        scanf("%d",&guess);
        if(guess>n){
            printf("put lower number please\n");
        }
        else if(guess<n){
            printf("put higher number please \n");
        }
        else{
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=n);

    return 0;
}
