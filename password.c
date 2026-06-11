#include <stdio.h>
int main(){
    int correct_password=1234;
    int tries=0;
    int gues =0;

    printf("##---Welcome key in the password---##");
    scanf("%c", &gues);

    while(gues != correct password && tries < 3){
        printf("Passowrd incorrect after tries");
        tries++;

    }
    if (guess== correct_password){
        printf(" WELCOME BACK ");
    }
    else{
        printf("Too many attempts acccount blocked");
    }
    return 0;



}