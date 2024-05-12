#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
    int n;
    printf("enter\n0 : ROCK\n1 : PAPER\n2 : SCISSORS\nCHOICE : ");
    scanf("%d",&n);
    switch(n){
        case 0:printf("    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
            printf("Rock\n");
        break;
        case 1:printf("    _______\n---'   ____)____\n          ______)\n          _______)\n         _______)\n---.__________)\n");
            printf("Paper\n");
        break;
        case 2:printf("    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
            printf("Scissors\n");
        break;
        default:printf("\ninvalid choice");
        return 0;
    }
    srand(time(NULL));
    int nr=rand()%3;
    switch(nr){
        case 0:printf("    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
            printf("Rock\n");
        break;
        case 1:printf("    _______\n---'   ____)____\n          ______)\n          _______)\n         _______)\n---.__________)\n");
            printf("Paper\n");
        break;
        case 2:printf("    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
            printf("Scissors\n");
        break;
        default:printf("\ninvalid choice");
        return 0;
    }
    if((n==0 && nr==0) || (n==1 && nr==1) || (n==2 && nr==2)){
        printf("\nRESULT : Tie!!");
    }
    else if((n==0 && nr==1) || (n==2 && nr==0) || (n==1 && nr==2)){
        printf("\nRESULT : You lose!!");
    }
    else{
        printf("\nRESULT : You won!!");
    }
    return 0;
}
