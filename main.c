#include<stdio.h>
#include<stdlib.h>

int main() {
    int user,comp;

    while(1){
        printf("\n Enter you mone: \t 0 is Rock \t 1 is Paper \t 2 is Scissor \t 9 to Exit :");
        scanf("%d",&user);
        comp = rand() % 3;

        if(user == 9) {
            exit(1);
        }
        else if (user == 0 && comp == 1){
            printf("\n The Computer is Winner \t Paper beats Rock");            
        }else if (user == 0 && comp == 2){
            printf("\n The User is Winner \t Rock beats Scissor");            
        }else if (user == 1 && comp == 0){
            printf("\n The User is Winner \t Paper beats Rock");            
        }else if (user == 1 && comp == 2){
            printf("\n The Computer is Winner \t Scissor beats Paper");            
        }else if (user == 2 && comp == 0){
            printf("\n The Computer is Winner \t Rock beats Scissor");            
        }else if (user == 2 && comp == 1){
            printf("\n The User is Winner \t Scissor beats Paper");            
        }
        else{
            printf("IS Draw!");
        }
        
    }
    return 0;
}